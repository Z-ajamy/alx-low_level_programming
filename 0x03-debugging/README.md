# 0x03-debugging

## 📌 Overview
This directory contains exercises and projects focused on debugging in C. Debugging is an essential skill for software development, allowing programmers to identify and fix errors in their code efficiently. The tasks in this directory introduce different debugging techniques, including using `printf` statements, checking logic errors, and understanding common mistakes in C programming.

## 📂 Files in This Directory

### 1️⃣ `0-main.c`
- This file tests a function that checks whether a number is positive or negative.
- The goal is to ensure that the function behaves correctly for different input values.
- Debugging involves identifying logical errors in how numbers are classified.

### 2️⃣ `1-main.c`
- Contains an infinite loop that must be fixed.
- The bug is caused by an incorrect loop condition that causes the program to run indefinitely.
- Debugging involves identifying the loop condition error and correcting it while maintaining program logic.

### 3️⃣ `2-largest_number.c`
- Implements a function that determines the largest of three integers.
- Debugging focuses on fixing logic errors in the comparison statements.
- Ensures the function correctly returns the maximum number for any given input.

### 4️⃣ `3-print_remaining_days.c`
- This function calculates how many days are left in the year, accounting for leap years.
- The debugging task involves fixing incorrect calculations related to leap year conditions.
- Ensures that February 29th is correctly handled in leap years.

### 5️⃣ `main.h`
- Header file containing function prototypes for the debugging exercises.
- Ensures proper function declarations for modular programming.

### 6️⃣ `README.md`
- The documentation file (this file), providing a detailed explanation of the contents and purpose of this directory.

## 🛠 Debugging Techniques Used
1. **Using `printf` statements** to track variable values and program flow.
2. **Checking conditional statements** for logical errors.
3. **Reviewing loop conditions** to prevent infinite loops.
4. **Verifying function logic** to ensure correct outputs.
5. **Handling edge cases** in calculations, especially for leap years.

## 🚀 How to Compile and Run the Code
To compile a specific debugging file, use `gcc`:
```sh
gcc -Wall -Werror -Wextra -std=gnu89 -pedantic <filename.c> -o output
./output
```
For example, to compile and run `0-main.c`:
```sh
gcc -Wall -Werror -Wextra -std=gnu89 -pedantic 0-main.c -o test
./test
```

## ✅ Learning Outcomes
- Understanding the importance of debugging in software development.
- Learning different debugging techniques to fix common C programming errors.
- Developing problem-solving skills through logical analysis of code behavior.

Happy debugging! 🐞🚀
