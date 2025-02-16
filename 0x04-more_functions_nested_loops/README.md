# 0x04-more_functions_nested_loops

## 📌 Overview
This directory contains exercises that build upon the concepts of functions and nested loops in C. The focus is on developing efficient functions, applying mathematical operations, and practicing different control structures for iteration and conditional checks.

## 📂 Files in This Directory

### 🔹 `0-isupper.c`
- Checks if a character is uppercase.
- Uses ASCII values and conditional statements.

### 🔹 `1-isdigit.c`
- Checks if a character is a digit (0-9).
- Demonstrates input validation using functions.

### 🔹 `2-mul.c`
- Multiplies two integers and returns the result.
- Reinforces basic arithmetic operations.

### 🔹 `3-print_numbers.c`
- Prints numbers from `0` to `9`, followed by a new line.
- Uses loops to simplify repetitive tasks.

### 🔹 `4-print_most_numbers.c`
- Prints numbers from `0` to `9`, excluding `2` and `4`.
- Demonstrates selective iteration using conditional statements.

### 🔹 `5-more_numbers.c`
- Prints numbers from `0` to `14`, repeated 10 times.
- Uses nested loops to handle multi-line output.

### 🔹 `6-print_line.c`
- Draws a straight line using the `_` character.
- Demonstrates iterative character printing.

### 🔹 `7-print_diagonal.c`
- Draws a diagonal line using the `\` character.
- Uses loops to format graphical representations.

### 🔹 `8-print_square.c`
- Prints a square using the `#` character.
- Uses nested loops to handle 2D shape printing.

### 🔹 `9-fizz_buzz.c`
- Implements the classic **FizzBuzz** problem.
- Prints numbers from `1` to `100`:
  - Multiples of `3` print "Fizz".
  - Multiples of `5` print "Buzz".
  - Multiples of both `3` and `5` print "FizzBuzz".
- Demonstrates conditional checks and modulus operations.

### 🔹 `10-print_triangle.c`
- Prints a right-angled triangle using the `#` character.
- Uses nested loops to generate patterns.

### 🔹 `main.h`
- Contains function prototypes used in this directory.
- Helps in maintaining modular code structure.

### 🔹 `_putchar.c`
- Custom implementation of the `putchar` function.
- Used for character output in several programs.

### 🔹 `README.md`
- This documentation file, explaining the purpose and details of each program.

## 🛠 Compilation Instructions
To compile and run a specific program, use:
```sh
gcc -Wall -Werror -Wextra -pedantic <filename.c> -o output
./output
```
For example, to compile and run `0-isupper.c`:
```sh
gcc -Wall -Werror -Wextra -pedantic 0-isupper.c -o isupper
./isupper
```

## ✅ Learning Outcomes
- Expanding knowledge of functions in C.
- Using loops effectively for repeated operations.
- Practicing conditional logic for filtering input/output.
- Implementing mathematical operations and logical problem-solving.

Happy coding! 🚀
