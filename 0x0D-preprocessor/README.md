# ALX Low-Level Programming - More Malloc, Free

This directory is part of the ALX Software Engineering program, focusing on dynamic memory allocation in C using `malloc`, `calloc`, `realloc`, and `free`.

## Overview
Memory management is a crucial aspect of low-level programming, and this project covers different techniques for handling dynamic memory allocation. The exercises in this project demonstrate how to allocate and deallocate memory effectively while avoiding memory leaks and segmentation faults.

## Key Concepts Covered
- Using `malloc` to allocate memory dynamically.
- Implementing `calloc` for initializing allocated memory.
- Using `realloc` to resize dynamically allocated memory.
- Properly freeing allocated memory using `free`.

## Files in This Project
- **`0-malloc_checked.c`**: Allocates memory using `malloc` and terminates if allocation fails.
- **`1-string_nconcat.c`**: Concatenates two strings with a specified number of bytes from the second string.
- **`2-calloc.c`**: Implements `calloc` by allocating and initializing memory for an array.
- **`3-array_range.c`**: Creates an array of integers from a specified range.
- **`main.h`**: Contains function prototypes for all implemented functions.

## Compilation and Execution
To compile any file in this directory, use:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <file.c> -o <output>
```
Example:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-malloc_checked.c -o malloc_checked
./malloc_checked
```

## Learning Outcomes
By completing this project, you will:
- Gain a deeper understanding of memory management in C.
- Learn to handle errors when working with dynamic memory.
- Develop skills in implementing functions that manipulate memory efficiently.

## Author
This project is part of the ALX Software Engineering curriculum.
