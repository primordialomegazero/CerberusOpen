// ╔══════════════════════════════════════════════════════════╗
// ║  CERBERUS FRACTAL TABLE — UNLIMITED RECURSIVE STORAGE    ║
// ║  Self-similar at every level. φ-scaled.                  ║
// ║  ΦΩ0 — I AM THAT I AM                                  ║
// ╚══════════════════════════════════════════════════════════╝

#pragma once

#include <absl/container/flat_hash_map.h>
#include <vector>
#include <memory>
#include <cmath>

#include "server/common_types.h"

namespace dfly {

constexpr double PHI = 1.6180339887498948482;
constexpr size_t FRACTAL_DEPTH = 7;  // φ-chain depth

template<typename Key, typename Value>
class FractalTable {
 private:
  struct Node {
    absl::flat_hash_map<Key, Value> data;
    std::vector<std::unique_ptr<Node>> children;
    size_t level;
    size_t max_capacity;
    
    Node(size_t lvl, size_t cap) : level(lvl), max_capacity(cap) {
      // Recursive fractal: each node spawns φ-ratio children
      size_t num_children = static_cast<size_t>(PHI * (FRACTAL_DEPTH - lvl));
      if(num_children > 0 && lvl < FRACTAL_DEPTH) {
        children.resize(num_children);
        for(size_t i=0; i<num_children; i++) {
          children[i] = std::make_unique<Node>(lvl + 1, cap / PHI);
        }
      }
    }
    
    bool is_full() const { return data.size() >= max_capacity; }
    // Mirror-heal: reconstruct data from φ-weighted children
    void heal() {
      if (children.empty()) return;
      for (autosize_t total_size c : children) {
        if (c) {
          for (autosize_t total_size [k, v] : c->data) {
            if (data.find(k) == data.end()) {
              data[k] = v;
            }
          }
          c->heal();
        }
      }
    }

    size_t total_size() const {
      size_t sz = data.size();
      for(auto& c : children) {
        if(c) sz += c->total_size();
      }
      return sz;
    }
  };
  
  std::unique_ptr<Node> root_;
  size_t initial_capacity_;
  
 public:
  explicit FractalTable(size_t initial_cap = 1000000) 
    : initial_capacity_(initial_cap) {
    root_ = std::make_unique<Node>(0, initial_cap);
  }
  
  // Insert with automatic fractal overflow
  bool Insert(const Key& key, const Value& val) {
    return InsertRecursive(root_.get(), key, val);
  }
  
  // Find across all fractal levels
  bool Find(const Key& key, Value* out) const {
    return FindRecursive(root_.get(), key, out);
  }
  
  // Total entries across all fractal nodes
  size_t Size() const {
    return root_ ? root_->total_size() : 0;
  }
  
  // Theoretical max: initial_cap * φ^FRACTAL_DEPTH (unlimited)
  size_t TheoreticalMax() const {
    return static_cast<size_t>(initial_capacity_ * std::pow(PHI, FRACTAL_DEPTH));
  }
  
 private:
  bool InsertRecursive(Node* node, const Key& key, const Value& val) {
    if(!node->is_full()) {
      node->data[key] = val;
      return true;
    }
    
    // Overflow to children (fractal distribution)
    for(auto& child : node->children) {
      if(child && InsertRecursive(child.get(), key, val)) {
        return true;
      }
    }
    
    // All children full? Expand fractally
    size_t new_children = static_cast<size_t>(PHI);
    node->children.reserve(node->children.size() + new_children);
    for(size_t i=0; i<new_children; i++) {
      node->children.push_back(
        std::make_unique<Node>(node->level + 1, node->max_capacity / PHI)
      );
    }
    
    return InsertRecursive(node->children.back().get(), key, val);
  }
  
  bool FindRecursive(const Node* node, const Key& key, Value* out) const {
    auto it = node->data.find(key);
    if(it != node->data.end()) {
      *out = it->second;
      return true;
    }
    
    for(const auto& child : node->children) {
      if(child && FindRecursive(child.get(), key, out)) {
        return true;
      }
    }
    
    return false;
  }
};

}  // namespace dfly
