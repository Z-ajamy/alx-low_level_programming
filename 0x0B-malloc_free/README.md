# Dynamic Memory Allocation in C - Malloc and Free

This project focuses on dynamic memory allocation in C using `malloc` and `free`. The exercises cover creating and managing memory for strings and arrays dynamically.

## Concepts Covered
- Allocating memory dynamically using `malloc`
- Freeing allocated memory with `free`
- Handling memory allocation failures
- Creating functions that manage dynamic memory effectively

## Files and Their Purpose

- **0-create_array.c**: A function that creates an array of chars and initializes it with a specific character.
- **1-strdup.c**: A function that duplicates a string using `malloc`.
- **2-str_concat.c**: A function that concatenates two strings dynamically.
- **3-alloc_grid.c**: Allocates a 2D grid (array of integers) using `malloc`.
- **4-free_grid.c**: Frees a previously allocated 2D grid.
- **main.h**: Header file containing function prototypes.

## Compilation
To compile any of the C files, use the following command:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <file.c> -o <output>
```

## Usage
Each function is tested with a corresponding main file. Run the compiled executable to see the results.

Example:
```sh
./0-create_array
```

## Notes
- Always free dynamically allocated memory to prevent memory leaks.
- Check if `malloc` returns `NULL` before using allocated memory.

## Author
This project is part of the ALX Software Engineering program.

