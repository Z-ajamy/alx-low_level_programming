# File I/O in C

## Overview
This directory contains various C programs that demonstrate file input and output (I/O) operations in C. These programs utilize system calls such as `open`, `read`, `write`, and `close` to perform file handling operations.

## Files

### 0-read_textfile.c
- Reads a text file and prints its content to the standard output.
- Uses system calls `open`, `read`, and `write`.

### 1-create_file.c
- Creates a new file with specified permissions and writes text content into it.
- Uses `open` with `O_CREAT | O_WRONLY | O_TRUNC` flags.

### 2-append_text_to_file.c
- Appends text at the end of an existing file.
- Uses `open` with `O_WRONLY | O_APPEND`.

### 3-cp.c
- Implements the functionality of the `cp` command in Unix-like systems.
- Copies the contents of one file to another using `read` and `write`.

### 100-elf_header.c
- Reads and displays information from the ELF (Executable and Linkable Format) header of an ELF file.
- Uses `lseek`, `read`, and proper structure handling for ELF files.

## Compilation
Each C file can be compiled using `gcc` as follows:
```sh
gcc -Wall -Werror -Wextra -pedantic <file.c> -o <output>
```
For example:
```sh
gcc -Wall -Werror -Wextra -pedantic 0-read_textfile.c -o read_textfile
```

## Usage
To execute a compiled program, run:
```sh
./<output_file>
```
For example:
```sh
./read_textfile filename.txt
```

## Header File
### main.h
- Contains function prototypes for the file I/O operations.

## System Calls Used
- `open()`
- `close()`
- `read()`
- `write()`
- `lseek()` (used in `100-elf_header.c`)

## Author
Abdo Ajamy
