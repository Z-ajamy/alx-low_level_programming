# ALX Low-Level Programming - Pointers, Arrays, and Strings


## Project Structure
Each file in this directory represents a different task or exercise related to pointers, arrays, and strings in C.

### Files and Descriptions

| File Name         | Description |
|------------------|-------------|
| `0-reset_to_98.c` | Function that updates a pointer value to 98 |
| `1-swap.c` | Swaps the values of two integers |
| `2-strlen.c` | Returns the length of a string |
| `3-puts.c` | Prints a string followed by a newline |
| `4-print_rev.c` | Prints a string in reverse |
| `5-rev_string.c` | Reverses a string |
| `6-puts2.c` | Prints every other character of a string |
| `7-puts_half.c` | Prints the second half of a string |
| `8-print_array.c` | Prints elements of an array of integers |
| `9-strcpy.c` | Copies a string to another buffer |
| `100-atoi.c` | Converts a string to an integer |
| `0-strcat.c` | Concatenates two strings |
| `1-strncat.c` | Concatenates two strings with n bytes limit |
| `2-strncpy.c` | Copies a string with n bytes limit |
| `3-strcmp.c` | Compares two strings |
| `4-rev_array.c` | Reverses the content of an array of integers |
| `5-string_toupper.c` | Changes all lowercase letters to uppercase |
| `6-cap_string.c` | Capitalizes all words of a string |
| `7-leet.c` | Encodes a string into 1337 (leet) |
| `main.h` | Header file with function prototypes |
| `_putchar.c` | Custom `_putchar` function |

## Compilation
Each C file can be compiled using `gcc`:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <file.c> -o <output>
```

For example, to compile `0-strcat.c`:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-strcat.c -o strcat
```

## Usage
After compiling, you can execute the binary:
```sh
./<output>
```

For example:
```sh
./strcat
```

## Concepts Covered
- Understanding pointers and their manipulation
- Working with arrays and strings in C
- Implementing string operations manually
- Memory manipulation using pointers
- Function prototypes and modular programming

## Directory Structure
This repository follows a structured format:
```
0x05-pointers_arrays_strings/
├── 0-reset_to_98.c
├── 1-swap.c
├── ...
├── main.h
├── _putchar.c
└── README.md
```
Each directory contains a set of exercises focused on a specific topic.
