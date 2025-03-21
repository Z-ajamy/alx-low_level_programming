# 0x10. Variadic Functions

## Introduction
This project focuses on variadic functions in C, which allow functions to accept a variable number of arguments. Variadic functions are useful in scenarios where the number of inputs is unknown at compile time, such as functions like `printf` and `scanf`.

## Key Concepts
- Understanding variadic functions and how they work.
- Using the `stdarg.h` library to handle a variable number of arguments.
- Implementing functions that perform operations with an unknown number of inputs.

## Files in This Project

### `0-sum_them_all.c`
A function that returns the sum of all its parameters. If `n == 0`, the function returns `0`.

**Prototype:**
```c
int sum_them_all(const unsigned int n, ...);
```

### `1-print_numbers.c`
A function that prints numbers followed by a new line.

**Prototype:**
```c
void print_numbers(const char *separator, const unsigned int n, ...);
```
- `separator` is the string printed between numbers.
- If `separator` is `NULL`, it is not printed.

### `2-print_strings.c`
A function that prints strings followed by a new line.

**Prototype:**
```c
void print_strings(const char *separator, const unsigned int n, ...);
```
- `separator` is the string printed between strings.
- If a string is `NULL`, `(nil)` is printed instead.

### `3-print_all.c`
A function that prints anything based on a given format.

**Prototype:**
```c
void print_all(const char * const format, ...);
```
- `format` is a list of types to print: `c` (char), `i` (integer), `f` (float), `s` (string).
- If a string is `NULL`, `(nil)` is printed instead.

### `variadic_functions.h`
This header file contains all function prototypes used in the project.

## Compilation
All C files can be compiled using the following command:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <file.c> -o <output>
```

## Usage
To execute any of the programs, first compile them, then run the output file. For example:
```sh
./0-sum_them_all
```

## Learning Outcomes
By completing this project, you will learn:
- How to use variadic functions in C.
- How to handle multiple arguments using `stdarg.h`.
- How to create functions that can process an unknown number of parameters.

## Author
This project is part of the ALX Software Engineering program.

