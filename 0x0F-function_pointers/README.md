# Function Pointers in C - ALX Low-Level Programming

This directory contains projects and exercises related to function pointers in C as part of the ALX Software Engineering program. Function pointers allow functions to be passed as arguments to other functions, enabling flexible and reusable code structures.

## Learning Objectives
- Understand the concept of function pointers and their syntax in C.
- Learn how to use function pointers to call functions dynamically.
- Explore real-world applications such as callback functions.
- Implement function pointers in arithmetic operations and iteration techniques.

## Project Overview

### Key Files and Their Purposes

1. **0-print_name.c**
   - Uses a function pointer to print a name.
   - Demonstrates how function pointers can be passed to functions.

2. **1-array_iterator.c**
   - Implements a function that executes a function given as a parameter on each element of an array.
   - Useful for applying operations like printing or modifying array elements.

3. **2-int_index.c**
   - Searches for an integer in an array using a function pointer.
   - Demonstrates how function pointers can be used for conditional checks.

4. **3-main.c, 3-op_functions.c, 3-get_op_func.c, 3-calc.h**
   - Implements a simple calculator using function pointers.
   - Allows dynamic selection of arithmetic operations based on user input.

5. **function_pointers.h**
   - Contains function prototypes for the project.

6. **_putchar.c**
   - Custom implementation of the `_putchar` function used for character output.

## Compilation and Usage

Each C file can be compiled using `gcc` with the following flags:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <file.c> -o <output>
```

To execute a compiled file:
```sh
./<output>
```

## Practical Applications
- Function pointers are widely used in event-driven programming, callback functions, and handling dynamic operations like sorting algorithms.
- They enable modular code, reducing dependencies and improving maintainability.

## Author
This project is part of the ALX Software Engineering curriculum, reinforcing key C programming concepts.

