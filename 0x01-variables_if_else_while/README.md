# 0x01-variables_if_else_while

## 📌 Overview
This directory contains exercises that focus on variables, conditional statements (`if`, `else`, `while`), and loops in C programming. The goal is to understand control structures, iteration, and decision-making in C.

## 📂 Files in This Directory

### 🔹 `0-positive_or_negative.c`
- Determines if a randomly generated number is **positive**, **negative**, or **zero**.
- Uses the `if` and `else if` statements to evaluate conditions.

### 🔹 `1-last_digit.c`
- Extracts and prints the last digit of a randomly generated number.
- Uses conditionals to classify the last digit (greater than 5, equal to 0, or less than 6 but not 0).

### 🔹 `2-print_alphabet.c`
- Prints the lowercase alphabet from `a` to `z`.
- Uses a `for` loop for iteration.

### 🔹 `3-print_alphabets.c`
- Prints both lowercase (`a-z`) and uppercase (`A-Z`) alphabets.
- Uses character manipulation and loops.

### 🔹 `4-print_alphabt.c`
- Prints the alphabet excluding letters `q` and `e`.
- Uses conditional checks within a loop.

### 🔹 `5-print_numbers.c`
- Prints digits from `0` to `9`.
- Uses a `for` loop to iterate through numbers.

### 🔹 `6-print_numberz.c`
- Prints digits from `0` to `9` **without using `char` variables**.
- Uses ASCII values and `putchar()`.

### 🔹 `7-print_tebahpla.c`
- Prints the lowercase alphabet in **reverse order**.
- Uses a `for` loop and character manipulation.

### 🔹 `8-print_base16.c`
- Prints numbers from `0` to `9` followed by lowercase hex digits `a` to `f`.
- Introduces hexadecimal number representation.

### 🔹 `9-print_comb.c`
- Prints all possible combinations of single-digit numbers separated by commas and spaces.
- Uses loops and conditionals for formatting.

### 🔹 `100-print_comb3.c`
- Prints all possible different combinations of two digits in ascending order.
- Ensures each combination appears only once (e.g., `01`, not `10`).

### 🔹 `101-print_comb4.c`
- Prints all possible different combinations of three digits in ascending order.
- Ensures unique combinations (e.g., `012`, not `210`).

### 🔹 `102-print_comb5.c`
- Prints all possible combinations of two two-digit numbers (`00 01` to `98 99`).
- Uses nested loops to generate ordered pairs.

### 🔹 `README.md`
- This documentation file, explaining the purpose and details of each program.

## 🛠 Compilation Instructions
To compile and run a specific program, use:
```sh
gcc -Wall -Werror -Wextra -pedantic <filename.c> -o output
./output
```
For example, to compile and run `0-positive_or_negative.c`:
```sh
gcc -Wall -Werror -Wextra -pedantic 0-positive_or_negative.c -o positive_or_negative
./positive_or_negative
```

## ✅ Learning Outcomes
- Understanding variables and data types in C.
- Using `if`, `else if`, and `else` for decision-making.
- Implementing loops (`for`, `while`) to control execution flow.
- Practicing formatted output with `putchar()` and ASCII values.
- Learning to generate unique combinations efficiently.

Happy coding! 🚀
