# ALX Low-Level Programming - More Malloc, Free

## Introduction
This project focuses on advanced memory allocation in C using the `malloc`, `calloc`, and `realloc` functions. Dynamic memory allocation is crucial for managing memory efficiently, especially in applications where memory requirements are not known at compile time.

## Learning Objectives
- Understanding `malloc`, `calloc`, `realloc`, and `free`.
- Allocating memory dynamically and managing it properly.
- Handling errors in memory allocation.
- Writing functions that perform specific memory-related tasks.

## Project Files and Their Functionality

### 0-malloc_checked.c
Allocates memory using `malloc`. If memory allocation fails, the program exits with status `98`.

### 1-string_nconcat.c
Concatenates two strings. The function allows specifying how many bytes of the second string should be included in the concatenation.

### 2-calloc.c
Implements `calloc` by allocating memory for an array and setting all elements to zero.

### 3-array_range.c
Creates an array of integers containing values from a given minimum to a maximum value.

## Compilation Instructions
To compile any of the files, use the following command:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <file.c> -o <output>
```
For example:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-malloc_checked.c -o malloc_checked
```

## Usage
Run the compiled binary as follows:
```sh
./malloc_checked
```

## Key Concepts
1. **`malloc`** - Allocates a block of memory of a specified size.
2. **`calloc`** - Allocates memory for an array and initializes it to zero.
3. **`realloc`** - Resizes previously allocated memory.
4. **`free`** - Deallocates memory to prevent memory leaks.

## Author
This project is part of the ALX Software Engineering curriculum.

