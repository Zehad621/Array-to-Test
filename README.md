# Memory Allocation in Arrays: C++ vs Python

This project demonstrates the four main categories of array memory allocation:
1. Fixed Stack Dynamic
2. Stack Dynamic
3. Fixed Heap Dynamic
4. Heap Dynamic

## Language Comparison

| Category            | C++ Example                         | Python Example                          | Notes |
|---------------------|-------------------------------------|------------------------------------------|-------|
| Fixed Stack Dynamic | `int arr[5];`                       | `arr = [1, 2, 3, 4, 5]`                 | C++ uses stack memory explicitly; Python always uses heap internally |
| Stack Dynamic       | `int arr[size];` (VLA)              | `arr = [0] * size`                      | Python simulates via lists; C++ VLAs are compiler-dependent |
| Fixed Heap Dynamic  | `new int[5];`                       | `arr = [None]*5`                        | Python list allocated on heap; C++ uses `new` |
| Heap Dynamic        | `new int[size];` + reallocation     | `arr = []` + `.append()`               | Python is natively dynamic; C++ requires manual resizing |

## Summary

- **C++** gives fine-grained control over stack/heap allocation, but requires manual memory management.
- **Python** abstracts memory management, using heap-based structures under the hood, making it simpler but less explicit.
- C++ supports compile-time and run-time fixed arrays more distinctly than Python.
