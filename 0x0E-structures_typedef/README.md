# ALX Low-Level Programming - Structures and Typedef

This directory contains projects related to structures and the `typedef` keyword in C, as part of the ALX Software Engineering program. The focus is on defining and using structures to organize data efficiently and improving code readability with `typedef`.

## Understanding Structures and Typedef

### Structures
Structures (`struct`) in C allow grouping variables of different data types under a single name. They help in organizing complex data efficiently.

### Typedef
The `typedef` keyword allows defining new data type names, making the code more readable and reducing redundant type declarations.

## Project Files

### Source Files and Their Purpose
- `dog.h` - Header file containing the structure definition and function prototypes.
- `1-init_dog.c` - Function to initialize a variable of type `struct dog`.
- `2-print_dog.c` - Function to print a `struct dog` variable.
- `4-new_dog.c` - Function to create a new dog structure using `malloc`.

### Main Test Files
- `0-main.c`, `1-main.c`, `2-main.c`, `3-main.c`, `4-main.c` - Test files to check the functionality of the functions implemented.

## Compilation
To compile any of the programs using `gcc`, run:

```sh
gcc -Wall -pedantic -Werror -Wextra <file>.c -o output
```

For example:

```sh
gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-init_dog.c -o init_dog
./init_dog
```

## Key Concepts Learned
- How to define and use structures.
- How to use `typedef` to simplify structure definitions.
- Dynamic memory allocation for structures.
- Writing functions that manipulate structure data.

## Why Use Structures?
- They allow grouping related data types under one entity.
- They improve code organization and maintainability.
- They facilitate passing multiple related data values to functions efficiently.

## Author
This project is part of the ALX Software Engineering program and aims to deepen understanding of data structures in C programming.
