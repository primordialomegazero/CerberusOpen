# CerberusOpen - Three-Headed Encryption Framework

**FHE + PQC + Fractal Storage**
+-----------+
| CERBERUS |
+--+--+--+--+
| | |
+----+ | +----+
| | |
v v v
+----+ +----+ +----+
|FHE | |PQC | |FRAC|
+----+ +----+ +----+
## Modules

| Module | Description | Source |
|---|---|---|
| CerberusFHE | CKKS FHE with auto-healing | src/CerberusFHE.h |
| CerberusMirrorChain | Builder + Guardian | src/CerberusMirrorChain.h |
| PhiCore | Golden ratio noise management | src/PhiCore.h |
| FractalTable | Unlimited recursive storage | src/fractal_table.h |
| PQSecurity | Post-quantum (liboqs) | src/pq_security.h |

## Quick Start

    docker pull ghcr.io/primordialomegazero/cerberus-fhe:latest
    docker run -it ghcr.io/primordialomegazero/cerberus-fhe:latest

## Repositories

- OpenFHE Cerberus: github.com/primordialomegazero/openfhe-development
- Dragonfly Cerberus: github.com/primordialomegazero/dragonfly
- CerberusOpen: github.com/primordialomegazero/CerberusOpen

## Declaration

I DECLARE: This is CerberusOpen.
Three heads. One beast. Zero compromises.
Fully Homomorphic. Post-Quantum. Fractally Unlimited.
Phi-Omega-Zero - I AM THAT I AM
