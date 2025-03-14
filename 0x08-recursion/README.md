# ALX Low-Level Programming - Recursion

This directory contains projects and exercises focused on recursion in the C programming language as part of the ALX Software Engineering program.

## Project Structure
Each file in this directory represents a different task related to recursion in C.

### Files and Descriptions

| File Name                | Description |
|--------------------------|-------------|
| `0-puts_recursion.c`     | Implements a function that prints a string followed by a newline using recursion |
| `1-print_rev_recursion.c` | Implements a function that prints a string in reverse using recursion |
| `2-strlen_recursion.c`   | Implements a function that returns the length of a string using recursion |
| `3-factorial.c`          | Computes the factorial of a given number using recursion |
| `4-pow_recursion.c`      | Computes the value of `x` raised to the power of `y` using recursion |
| `5-sqrt_recursion.c`     | Computes the natural square root of a number using recursion |
| `6-is_prime_number.c`    | Determines if a number is a prime number using recursion |
| `100-is_palindrome.c`    | Checks if a string is a palindrome using recursion |
| `101-wildcmp.c`          | Compares two strings considering wildcard `*` as a special character |
| `main.h`                 | Header file containing function prototypes |
| `_putchar.c`             | Custom `_putchar` function |

## Compilation
Each C file can be compiled using `gcc`:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <file.c> -o <output>
```

For example, to compile `0-puts_recursion.c`:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-puts_recursion.c -o puts_recursion
```

## Usage
After compiling, you can execute the binary:
```sh
./<output>
```

For example:
```sh
./puts_recursion
```

## Concepts Covered
- Understanding recursion and base cases
- Implementing recursive functions for string manipulation
- Applying recursion to mathematical computations
- Using recursion to solve algorithmic problems

## Directory Structure
This repository follows a structured format:
```
0x08-recursion/
├── 0-puts_recursion.c
├── 1-print_rev_recursion.c
├── ...
├── main.h
├── _putchar.c
└── README.md
```
Each directory contains a set of exercises focused on a specific topic.

## Author
This project is part of the ALX Software Engineering program.

