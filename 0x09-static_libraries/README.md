# ALX Low-Level Programming - Static Libraries

This directory contains exercises and projects related to static libraries in C as part of the ALX Software Engineering program. The objective of this project is to understand the concept of static libraries, how they are created, and how they are used in compiling programs.

## Understanding Static Libraries

A static library is a collection of object files that are grouped together into a single file, allowing code reuse and modularization. Unlike dynamic libraries, static libraries are linked at compile-time, meaning all required functions are included in the final executable.

Static libraries have the `.a` (archive) extension and are commonly used for performance optimization and reducing dependencies during execution.

## Project Files

### Source Files
These files contain implementations of common C standard functions that are included in the static library:
- `0-isupper.c` - Checks for uppercase character.
- `1-isdigit.c` - Checks for a digit (0 through 9).
- `2-strlen.c` - Computes the length of a string.
- `3-islower.c` - Checks for a lowercase character.
- `3-puts.c` - Prints a string followed by a newline.
- `4-isalpha.c` - Checks for an alphabetic character.
- `5-strstr.c` - Locates a substring.
- `6-abs.c` - Computes the absolute value of an integer.
- `_putchar.c` - Custom implementation of `_putchar`.

### Object Files
Each `.c` file is compiled into a corresponding `.o` (object) file, which is then archived into a static library.

### Static Library
- `libmy.a` - The static library containing compiled object files.

### Scripts and Headers
- `main.h` - Header file containing function prototypes.
- `create_static_lib.sh` - Shell script to automate the creation of the static library.
- `main.c` - A sample main program to test the library.

## Creating a Static Library
To create a static library from the object files, use the `ar` command:

```sh
ar rc libmy.a *.o
ranlib libmy.a
```

Alternatively, you can use the provided script:

```sh
./create_static_lib.sh
```

## Compiling a Program Using the Static Library
Once the static library is created, compile any program that uses it as follows:

```sh
gcc -Wall -pedantic -Werror -Wextra main.c -L. -lmy -o output
```

## Why Use Static Libraries?
- They improve performance by reducing runtime dependencies.
- They allow for modular programming by organizing reusable functions.
- They are useful when distributing software that does not require external dependencies.

## Conclusion
Understanding static libraries is essential for building efficient and reusable code in C. This project provides a hands-on approach to working with libraries, linking, and optimizing code compilation.

## Author
This project is part of the ALX Software Engineering program and is designed to enhance low-level programming skills.
