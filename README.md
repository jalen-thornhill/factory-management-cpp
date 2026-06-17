# Factory Management System

A C++ object-oriented factory management system that simulates manufactured item tracking, modification, searching, sorting, stack-based reverse display, and item size randomization.

## Features

* Initialize 100 factory items
* Display all item profiles
* Modify item name and size by array position
* Search items by ID
* Search items by name
* Display items in reverse order using a manual stack
* Sort items by ID using a manual sorting algorithm
* Sort items by size using a manual sorting algorithm
* Randomize item sizes using a uniform distribution
* Randomize item sizes using a normal distribution

## Course Concepts Demonstrated

* Classes and objects
* Encapsulation
* Header and implementation file separation
* Arrays of objects
* Manual stack implementation
* Manual searching
* Manual sorting
* Random number generation
* Menu-driven console programming
* Input validation
* Modular program design

## Project Structure

```text
factory-management-cpp/
  main.cpp
  Item.hpp
  Item.cpp
  Factory.hpp
  Factory.cpp
  StackItems.hpp
  StackItems.cpp
  QueueItems.hpp
  QueueItems.cpp
  SearchItems.hpp
  SearchItems.cpp
  SortItems.hpp
  SortItems.cpp
  RandomItems.hpp
  RandomItems.cpp
  docs/
    TEST_PLAN.md
    TEST_REPORT.md
  README.md
  .gitignore
  LICENSE
```

## Build Instructions

```bash
g++ main.cpp Factory.cpp Item.cpp StackItems.cpp QueueItems.cpp SearchItems.cpp SortItems.cpp RandomItems.cpp -o factory.exe
```

## Run Instructions

```bash
./factory.exe
```

On Windows PowerShell:

```powershell
.\factory.exe
```

## Example Usage

```text
1. Display Items
2. Modify Item
3. Search Item By ID
4. Search Item By Name
5. Display Items in Reverse Order
6. Sort Items By ID
7. Sort Items By Size
8. Randomize Sizes Uniformly
9. Randomize Sizes Normally
0. Exit
```

## Testing

Manual testing was documented in:

```text
docs/TEST_PLAN.md
docs/TEST_REPORT.md
```

Tested areas include:

* Factory setup
* Item modification
* Search by ID
* Search by name
* Reverse display using stack
* Sorting by ID
* Sorting by size
* Uniform randomization
* Normal randomization

## Future Work

* Add file persistence
* Add unit tests
* Add queue-based processing simulation
* Add item categories
* Add report export
* Add better input validation for multi-word item names

## Status

Core factory management functionality complete.
