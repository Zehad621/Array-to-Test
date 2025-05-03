Array-to-Test
Memory Allocation Comparison: C++ vs Python
Project Description
This project demonstrates the different categories of memory allocation using arrays in C++ and Python:

Fixed Stack Dynamic

Stack Dynamic

Fixed Heap Dynamic

Heap Dynamic

Fixed Stack Dynamic Description: Memory is allocated at compile time on the stack with a fixed size.

Example (C++): int arr[5];

Behavior:

The size of the array is known and fixed during compilation.

Fast access since stack memory is quick.

No resizing possible during runtime.

Used When: The maximum required size is known and constant.

Stack Dynamic Description: Memory is allocated at runtime on the stack, but the size is determined by the user during execution.
Example (C++ with VLA):

cpp Copy Edit int size;
cin >> size;
int arr[size]; // Variable-length array Behavior:

Allocated on stack, but size is flexible.

Scope-limited and deallocated automatically after function ends.

Not supported in all languages or compilers (C++ doesn't guarantee it; C99 supports it).

Used When: The size is user-defined and temporary (e.g., inside a function).

Fixed Heap Dynamic Description: Memory is allocated on the heap for a fixed size, usually using pointers or dynamic allocation tools.
Example (C++): int* arr = new int[5];

Behavior:

Size is set at runtime but cannot be changed after allocation.

Manual deallocation is required (delete[] arr;).

Longer lifetime than stack variables.

Used When: A fixed-size array needs to persist outside a function or has a large size.

Heap Dynamic Description: Memory is allocated on the heap, and the size can grow or shrink dynamically during runtime.
Example (Python): arr = [] then arr.append(value)

Behavior:

Fully dynamic: can change size anytime.

Managed by garbage collection in high-level languages like Python.

More flexible but may have performance overhead.

Used When: The size of the array is unknown or varies frequently during program execution.

Each category is implemented using simple array programs in both languages to compare memory allocation techniques.

Comparisons Between C++ and Python
Category	C++ Code	Python Code
Fixed Stack Dynamic	int arr[5];	arr = [1, 2, 3, 4, 5]
Stack Dynamic	int arr[size]; (VLA)	arr = [i for i in range(size)]
Fixed Heap Dynamic	int* arr = new int[5];	array.array('i', [...])
Heap Dynamic	int* arr = new int[size];	arr = [i for i in range(size)]
Key Differences
C++ allows more fine-grained control over memory (stack vs heap) using pointers and new/delete.
Python abstracts memory allocation using dynamic lists and built-in modules like array.
Stack-based arrays are more evident in C++ while Python relies on heap-like dynamic lists for all cases.
File Structure
MemoryAllocationComparison/
├── C++/
│   ├── fixed_stack_dynamic.cpp
│   ├── stack_dynamic.cpp
│   ├── fixed_heap_dynamic.cpp
│   └── heap_dynamic.cpp
├── Python/
│   ├── fixed_stack_dynamic.py
│   ├── stack_dynamic.py
│   ├── fixed_heap_dynamic.py
│   └── heap_dynamic.py
└── README.md
