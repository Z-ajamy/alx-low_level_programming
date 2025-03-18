# ALX Low-Level Programming - Command Line Arguments (`argc` and `argv`)

This project focuses on handling command-line arguments in C using `argc` (argument count) and `argv` (argument vector). Understanding these parameters allows programs to receive input dynamically from the command line.

## Understanding `argc` and `argv`

### `argc` (Argument Count)
`argc` represents the number of arguments passed to the program, including the program name itself.

### `argv` (Argument Vector)
`argv` is an array of character pointers listing all the arguments passed to the program as strings.

## Project Files

### Source Files and Their Purpose
- `0-whatsmyname.c` - Prints the program's name.
- `1-args.c` - Prints the number of arguments passed.
- `2-args.c` - Prints all arguments received.
- `3-mul.c` - Multiplies two numbers given as arguments.
- `4-add.c` - Adds multiple numbers given as arguments.
- `100-change.c` - Calculates the minimum number of coins needed for change.

### Additional Files
- `main.h` - Header file containing function prototypes.
- `README.md` - Documentation for the project.

## Compilation
Each file can be compiled using `gcc`:

```sh
gcc -Wall -pedantic -Werror -Wextra <file>.c -o <output>
```

For example:

```sh
gcc -Wall -pedantic -Werror -Wextra 3-mul.c -o mul
./mul 3 4
```

## Key Concepts Learned
- How to access command-line arguments in C.
- Handling integer conversions using `atoi()`.
- Validating input and handling errors.
- Implementing basic arithmetic operations with user inputs.

## Why Use Command-Line Arguments?
- They allow passing data dynamically without modifying the code.
- They improve the flexibility of programs by enabling parameterized execution.
- They are essential for scripting and automation in C programs.

## Author
This project is part of the ALX Software Engineering program, providing hands-on experience with command-line argument handling in C.
