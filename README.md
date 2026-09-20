# Core Data Structures in C++

A collection of fundamental data structures implemented from scratch in C++ as part of an internship task. The project focuses on understanding the internal working, core operations, memory management, and computational complexity of commonly used data structures through independent console-based implementations.

The project includes **Singly Linked List, Stack, Circular Queue, and Binary Search Tree**, with each implementation providing a menu-driven interface for performing and testing its supported operations.

---

## Project Overview

Data structures are fundamental to efficient programming and algorithm design. This project provides individual implementations of four commonly used data structures without relying on C++ STL container classes.

Each implementation demonstrates the underlying structure and operations through manually written C++ code.

The project covers:

* Dynamic node-based data structures
* Fixed-size array-based data structures
* Pointer-based memory management
* Recursive tree operations
* Searching, insertion, deletion, and traversal
* Overflow and underflow handling
* Boundary condition handling
* Time and space complexity analysis
* Interactive console-based execution

---

## Objectives

The primary objectives of the project are:

* Implement fundamental data structures from scratch
* Understand the internal representation of data structures
* Work with pointers and dynamically allocated memory
* Implement standard data structure operations
* Understand LIFO and FIFO principles
* Apply recursion in tree-based operations
* Handle boundary and exceptional conditions
* Analyze time and space complexity
* Apply object-oriented programming concepts
* Test and validate implementations through practical execution

---

## Data Structures Implemented

### 1. Singly Linked List

The Linked List is implemented using dynamically allocated nodes. Each node contains an integer value and a pointer to the next node.

#### Operations

* Insert element at the end
* Delete the first occurrence of an element
* Search for an element
* Display the complete list

#### Implementation Details

The list maintains a `head` pointer that refers to the first node.

During insertion, a new node is dynamically allocated and attached to the end of the existing list. Deletion updates the required links and releases the deleted node from memory.

The implementation also includes a destructor that releases all remaining nodes when the Linked List object is destroyed.

---

### 2. Stack

The Stack is implemented using a fixed-size array with a maximum capacity of **100 elements**.

It follows the **LIFO (Last In, First Out)** principle, where the most recently inserted element is removed first.

#### Operations

* Push
* Pop
* Peek
* Search
* Display

#### Implementation Details

The stack uses a `top` variable to track the position of the topmost element. It is initialized to `-1`, indicating an empty stack.

The implementation includes checks for:

* Stack Overflow
* Stack Underflow
* Empty stack during Peek
* Empty stack during Display

The search operation traverses the stack from top to bottom.

---

### 3. Circular Queue

The Queue is implemented as a **circular array-based queue** with a maximum capacity of **100 elements**.

It follows the **FIFO (First In, First Out)** principle, where the earliest inserted element is removed first.

#### Operations

* Enqueue
* Dequeue
* Front
* Search
* Display

#### Implementation Details

The queue maintains three variables:

* `frontIndex` — identifies the front element
* `rearIndex` — identifies the rear element
* `count` — stores the number of elements currently present

Circular indexing is implemented using the modulo operator:

```cpp
rearIndex = (rearIndex + 1) % MAX_SIZE;
```

and:

```cpp
frontIndex = (frontIndex + 1) % MAX_SIZE;
```

This allows previously occupied positions to be reused after elements are removed.

The implementation includes overflow and underflow handling along with empty-queue checks.

---

### 4. Binary Search Tree

The Binary Search Tree is implemented using dynamically allocated nodes. Each node contains a data value and pointers to its left and right child nodes.

The BST maintains the standard ordering property:

* Values smaller than a node are stored in its left subtree.
* Values greater than a node are stored in its right subtree.
* Duplicate values are not inserted.

#### Operations

* Insert
* Delete
* Search
* Inorder traversal

#### Implementation Details

Insertion and search are implemented recursively according to the BST ordering property.

The deletion operation handles all three standard cases:

1. **Leaf Node** — a node with no children
2. **One Child** — a node with either a left or right child
3. **Two Children** — the node is replaced with the minimum value from its right subtree

The minimum element is located using the `findMin()` function.

The inorder traversal follows:

```text
Left → Root → Right
```

For a valid BST, inorder traversal produces the stored values in ascending order.

A destructor is implemented to clear all dynamically allocated nodes when the tree object is destroyed.

---

## Project Structure

```text
Core-Data-Structures/
│
├── LinkedList/
│   └── linked_list.cpp
│
├── Stack/
│   └── stack.cpp
│
├── Queue/
│   └── queue.cpp
│
├── BinarySearchTree/
│   └── bst.cpp
│
├── README.md
└── Internship_Documentation.docx
```

Each data structure is maintained as an independent C++ source file with its own implementation and menu-driven interface.

---

## Technology Stack

| Component               | Details                     |
| ----------------------- | --------------------------- |
| Programming Language    | C++                         |
| Programming Paradigm    | Object-Oriented Programming |
| Compiler                | GNU g++                     |
| Standard Library        | iostream                    |
| Interface               | Command Line / Console      |
| Development Environment | Visual Studio Code          |
| Operating System        | Windows 11                  |
| Source Files            | `.cpp`                      |

---

## Environment

The project was developed and tested using the following environment:

| Component               | Environment            |
| ----------------------- | ---------------------- |
| Operating System        | Windows 11             |
| Programming Language    | C++                    |
| Compiler                | GNU g++                |
| Development Environment | Visual Studio Code     |
| Interface               | Command Line / Console |
| Standard Library        | C++ iostream           |
| Source File Format      | `.cpp`                 |
| Documentation Format    | `.docx`                |

### Compiler

The programs are compiled using the GNU C++ compiler (`g++`).

Example compilation command:

```bash
g++ linked_list.cpp -o linked_list
```

The same compilation approach is used for the Stack, Circular Queue, and Binary Search Tree implementations.

### Environment Notes

* The programs use standard C++ features.
* No external libraries are required.
* No database or third-party framework is used.
* All programs run as standalone console applications.
* The Stack has a fixed capacity of 100 elements.
* The Circular Queue has a fixed capacity of 100 elements.
* The Linked List uses dynamic memory allocation.
* The Binary Search Tree uses dynamic memory allocation.
* The project was developed and tested using Visual Studio Code with GNU g++ on Windows 11.

---

## Implementation Approach

The project does not use built-in STL container classes such as:

```text
vector
list
stack
queue
set
map
```

The internal structure and required operations are implemented manually.

### Linked List and Binary Search Tree

Both structures use dynamically allocated nodes and pointers.

**Linked List**

* Node-based sequential structure
* `head` pointer maintains the first node
* Nodes are connected through `next` pointers
* Destructor releases allocated memory

**Binary Search Tree**

* Node-based hierarchical structure
* `root` pointer maintains the tree
* `left` and `right` pointers maintain child relationships
* Recursive operations are used for insertion, search, deletion, and traversal
* Destructor clears the complete tree

### Stack and Circular Queue

Both structures use fixed-size arrays.

**Stack**

* Array-based implementation
* `top` tracks the current top element
* LIFO access pattern
* Maximum capacity of 100 elements

**Circular Queue**

* Array-based circular implementation
* `frontIndex` and `rearIndex` maintain queue boundaries
* `count` tracks the number of active elements
* FIFO access pattern
* Maximum capacity of 100 elements

---

## Program Interface

Each implementation provides a menu-driven console interface.

### Linked List

```text
1. Insert
2. Delete
3. Search
4. Display
5. Exit
```

### Stack

```text
1. Push
2. Pop
3. Peek
4. Search
5. Display
6. Exit
```

### Circular Queue

```text
1. Enqueue
2. Dequeue
3. Front
4. Search
5. Display
6. Exit
```

### Binary Search Tree

```text
1. Insert
2. Delete
3. Search
4. Display Inorder
5. Exit
```

---

## Compilation and Execution

The project uses the GNU C++ compiler (`g++`).

### Linked List

```bash
cd LinkedList
g++ linked_list.cpp -o linked_list
linked_list.exe
```

### Stack

```bash
cd Stack
g++ stack.cpp -o stack
stack.exe
```

### Circular Queue

```bash
cd Queue
g++ queue.cpp -o queue
queue.exe
```

### Binary Search Tree

```bash
cd BinarySearchTree
g++ bst.cpp -o bst
bst.exe
```

For Linux/macOS environments, the generated executables can be launched using:

```bash
./linked_list
./stack
./queue
./bst
```

---

## Complexity Analysis

### Linked List

| Operation | Time Complexity |
| --------- | --------------: |
| Insert    |            O(n) |
| Delete    |            O(n) |
| Search    |            O(n) |
| Display   |            O(n) |

Space complexity: **O(n)** for dynamically allocated nodes.

### Stack

| Operation | Time Complexity |
| --------- | --------------: |
| Push      |            O(1) |
| Pop       |            O(1) |
| Peek      |            O(1) |
| Search    |            O(n) |
| Display   |            O(n) |

The stack uses a fixed-size array with a capacity of 100 elements.

### Circular Queue

| Operation | Time Complexity |
| --------- | --------------: |
| Enqueue   |            O(1) |
| Dequeue   |            O(1) |
| Front     |            O(1) |
| Search    |            O(n) |
| Display   |            O(n) |

The queue uses a fixed-size array with a capacity of 100 elements.

### Binary Search Tree

| Operation         | Average Case | Worst Case |
| ----------------- | -----------: | ---------: |
| Insert            |     O(log n) |       O(n) |
| Search            |     O(log n) |       O(n) |
| Delete            |     O(log n) |       O(n) |
| Inorder Traversal |         O(n) |       O(n) |

The BST requires **O(n)** storage for its dynamically allocated nodes. Recursive operations require additional stack space proportional to the tree height.

---

## Boundary Conditions and Error Handling

The implementations account for important boundary conditions during execution.

### Linked List

* Empty list during display
* Search for a non-existing value
* Deletion of a non-existing value
* Deletion of the first node
* Deletion of the first matching occurrence

### Stack

* Push operation on a full stack
* Pop operation on an empty stack
* Peek operation on an empty stack
* Search for a non-existing value
* Display of an empty stack

### Circular Queue

* Enqueue operation on a full queue
* Dequeue operation on an empty queue
* Front operation on an empty queue
* Search on an empty queue
* Display of an empty queue
* Reuse of array positions through circular indexing

### Binary Search Tree

* Search in an empty tree
* Search for a non-existing value
* Deletion of a leaf node
* Deletion of a node with one child
* Deletion of a node with two children
* Duplicate value insertion

---

## Testing and Validation

The implementations were tested through menu-driven console execution.

The validation process covered:

* Insertion of multiple values
* Deletion of existing values
* Searching for existing values
* Searching for non-existing values
* Display and traversal operations
* Empty data structure conditions
* Stack overflow and underflow conditions
* Queue overflow and underflow conditions
* Circular queue position reuse
* BST deletion with different child configurations
* Duplicate value handling in BST
* Repeated operations on the same data structure

The sample executions and program screenshots are included in the internship documentation.

---

## Key Concepts Covered

* Data structure fundamentals
* Arrays and indexing
* Pointers
* Dynamic memory allocation
* Structures and classes
* Constructors and destructors
* Object-oriented programming
* LIFO principle
* FIFO principle
* Circular queue implementation
* Recursion
* Binary Search Tree properties
* Tree traversal
* Searching and deletion algorithms
* Memory management
* Time complexity
* Space complexity
* Boundary condition handling

---

## Learning Outcomes

This project provided practical implementation experience with fundamental data structures and strengthened understanding of their internal operations.

The implementation covers both array-based and pointer-based approaches, along with recursive algorithms and dynamic memory management. It also provides practical exposure to analyzing operation-wise time complexity and handling different execution conditions.

---

## Documentation

Detailed project documentation is provided separately in:

**`Internship_Documentation.docx`**

The documentation contains:

* Project overview
* Objectives
* Technology and environment
* Individual implementation details
* Supported operations
* Compilation and execution
* Sample input/output
* Complexity analysis
* Validation and test cases
* Program screenshots
* Results
* Conclusion

---

## Result

All four data structures were implemented successfully in C++ and tested through their respective menu-driven console interfaces.

The project demonstrates the implementation and practical working of fundamental data structures using arrays, pointers, dynamic memory allocation, recursion, and object-oriented programming concepts.

---

## Author

**Nivedita Sikarwar**

B.E. Computer Science and Engineering

**InterSpark Internship Task — Core Data Structures Implementation**
