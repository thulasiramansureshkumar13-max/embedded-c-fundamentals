# Memory Segments in C

This project demonstrates how a C program uses different memory
segments during execution.

## Memory Areas Demonstrated

- Text segment
- Data segment
- BSS segment
- Heap
- Stack

## Experiments

### 1. Data and BSS

Demonstrates the difference between:

- Initialized global variables → DATA
- Uninitialized global variables → BSS
- Static variables → DATA/BSS

Tools used:

```bash
size program
ls -l program
