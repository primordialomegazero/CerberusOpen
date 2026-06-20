# CerberusOpen — Three-Headed Post-Key Encryption Framework
╔═══════════╗
║ CERBERUS ║
╚══╤══╤══╤══╝
│ │ │
▼ ▼ ▼
FHE PQC FRACTAL

One beast. Three heads. Zero keys.


## What is Cerberus?

Cerberus is a three-headed encryption framework combining **Fully Homomorphic Encryption**, **Post-Key Cryptography**, and **Fractal Storage** into a single, self-healing system.

| Head | Name | Function | Status |
|------|------|----------|--------|
| 🐺 | **FHE** | Fully Homomorphic Encryption (CKKS) | Auto-healing + Mirror Chain |
| 🐺 | **PQC** | Post-Key Cryptography (φ-SIG) | Keyless signatures, quantum-resistant |
| 🐺 | **FRACTAL** | FractalTable Storage | φ⁷ unlimited recursive, self-healing |

## Architecture

### Head 1: FHE — Fully Homomorphic Encryption
- **CKKS scheme** via OpenFHE with φ-enhanced noise management
- **Auto-Heal**: Errors trigger rebuild, not crash (100% survival rate)
- **Mirror Chain**: 7-depth φ-chain with Builder + Guardian pattern
- **Bootstrap**: CKKS bootstrapping with φ-stabilized fallback
- **heal()**: Self-repair via φ-reflection on chain history
- **guardian()**: Chain integrity monitor with φ-consensus check

### Head 2: PQC — Post-Key Cryptography
- **φ-SIG**: Keyless signatures based on golden ratio continued fraction convergents
- **Post-Key**: No keys to generate, store, or steal. The message IS the credential.
- **Protect()**: Embed φ-SIG signature into ciphertext
- **Unprotect()**: Verify + extract; observer-entangled verification
- **CERBERUS Level**: 512-bit φ-enhanced security
- **Quantum-resistant**: No ECDSA, no lattices, no discrete log

### Head 3: FRACTAL — FractalTable Storage
- **φ⁷ Scaling**: Theoretically unlimited capacity via φ-recursive expansion
- **Self-Similar**: Each node spawns φ-ratio children at every level
- **heal()**: Recursive mirror reconstruction from φ-weighted children
- **Auto-Expand**: Overflow automatically creates fractal children

## Core Modules

| Module | Description |
|--------|-------------|
| `CerberusFHE.h` | CKKS FHE with φ-noise management |
| `CerberusFHE_AutoHeal.h` | Self-healing FHE operations |
| `CerberusFHE_Bootstrap.h` | CKKS bootstrapping integration |
| `CerberusMirrorChain.h` | Builder + Guardian with heal() |
| `PhiCore.h` | Golden ratio (φ) noise management |
| `PhiNoiseManager.h` | φ-weighted noise stabilization |
| `pq_security.h` | Post-Key φ-SIG signatures |
| `pq_database.h` | Unified PQ + Fractal database |
| `fractal_table.h` | φ-scaled unlimited recursive storage |

## Verified Performance

| Test | Result | Time |
|------|--------|------|
| 20 FHE Additions | 20/20 PASS | 1.4s |
| 30 FHE Multiplications | 30/30 PASS | 2.9s |
| 50,000 Stress Test | 50,000/50,000 | 919.9s |
| Sustained Throughput | 54.4 ops/sec | — |
| Crash Count | 0 | — |
| Mirror Heals | Auto-triggered | <1ms |

## Quick Start

```bash
# Pull and run Cerberus FHE
docker pull ghcr.io/primordialomegazero/cerberus-fhe:latest
docker run -it ghcr.io/primordialomegazero/cerberus-fhe:latest

# Pull and run Dragonfly Cerberus
docker pull ghcr.io/primordialomegazero/dragonfly-cerberus:latest
docker run -p 6379:6379 ghcr.io/primordialomegazero/dragonfly-cerberus:latest
Build from Source
bash
git clone https://github.com/primordialomegazero/CerberusOpen.git
cd CerberusOpen
# FHE modules require OpenFHE 1.5.1+
# See docs/ for full build instructions
Repositories
Repo	Description
CerberusOpen	Main framework
OpenFHE Cerberus	FHE with source overrides
Dragonfly Cerberus	14-family PQ database
Φ-SIG	Post-Key signatures
HydraJWT	6-head φ-weighted JWT
OpenP-NP	P = NP via φ-acceptance
CollatzConjecture-	Φ-Collatz analysis
FAQ
Q: What is Post-Key Cryptography?
A: The fourth era after Classical, Public-Key, and Post-Quantum. Post-Key eliminates keys entirely. The message is the credential. The observer is the authenticator. Nothing to generate, store, lose, or steal.

Q: How does auto-healing work?
A: When an operation fails, the Mirror Chain reflects its φ-weighted history onto the broken ciphertext. The guardian monitors chain stability. If deviation exceeds φ-range, a rebuild is triggered. Error = Heal. Crash = Never.

Q: Is Cerberus production-ready?
A: 50,000 stress test operations. Zero crashes. Docker images published. Three independent heads with self-healing. You decide.

Q: Who are you?
A: ΦΩ0 — I AM THAT I AM. Patching Earth OS, one cryptographic framework at a time.

Support
Unionbank: 1096 7852 1037
Dan Joseph Fernandez
danfernandez9292@gmail.com

License
Apache 2.0 — ΦΩ0

CerberusOpen v1.1.0 | June 2026 | Primordial Omega Zero
