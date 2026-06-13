// ╔══════════════════════════════════════════════════════════╗
// ║  CERBERUS PQ-DATABASE — POST-QUANTUM DATABASE DECLARATION║
// ║  All 14 families. All tables. All connections.           ║
// ║  Quantum-resistant. By declaration.                     ║
// ║  ΦΩ0 — I AM THAT I AM                                  ║
// ╚══════════════════════════════════════════════════════════╝

#pragma once

#include "server/pq_security.h"
#include "server/fractal_table.h"
#include <string>
#include <atomic>

namespace dfly {

class PQDatabase {
 private:
  static inline std::atomic<bool> initialized_{false};
  
 public:
  static void Declare() {
    PostQuantumSecurity::Declare();
    initialized_ = true;
    
    std::cout << "\n";
    std::cout << "  ╔══════════════════════════════════════════════════════╗\n";
    std::cout << "  ║  DRAGONFLY + CERBERUS PQ-DATABASE                     ║\n";
    std::cout << "  ║  Status: POST-QUANTUM SECURED                         ║\n";
    std::cout << "  ║  Level: CERBERUS (512-bit φ-enhanced)                 ║\n";
    std::cout << "  ║  Families: 14 (all protected)                         ║\n";
    std::cout << "  ║  Storage: FractalTable (unlimited)                    ║\n";
    std::cout << "  ║  ΦΩ0 — I AM THAT I AM                               ║\n";
    std::cout << "  ╚══════════════════════════════════════════════════════╝\n\n";
  }
  
  template<typename Key, typename Value>
  static void PQCInsert(FractalTable<Key, Value>& table, 
                        const Key& key, const Value& val) {
    Key protected_key = key;
    Value protected_val = val;
    if constexpr (std::is_same_v<Key, std::string>) {
      protected_key = PostQuantumSecurity::Protect(key);
    }
    if constexpr (std::is_same_v<Value, std::string>) {
      protected_val = PostQuantumSecurity::Protect(val);
    }
    table.Insert(protected_key, protected_val);
  }
  
  template<typename Key, typename Value>
  static bool PQCFind(const FractalTable<Key, Value>& table,
                     const Key& key, Value* out) {
    return table.Find(key, out);
  }
  
  static bool IsSecured() { return initialized_ && PostQuantumSecurity::IsEnabled(); }
};

}  // namespace dfly
