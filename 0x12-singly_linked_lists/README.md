# 0x12. C - Singly Linked Lists

## Description
This project focuses on implementing and using singly linked lists in C. A singly linked list is a data structure that consists of nodes, where each node contains data and a pointer to the next node in the sequence. This project will help you understand memory allocation, pointers, and data structures in C.

## Learning Objectives
By the end of this project, you should be able to:
- Understand when and why to use linked lists vs arrays
- Build and use linked lists
- Apply proper memory management techniques for dynamic data structures

## Requirements
- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc with options: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- A `README.md` file at the root of the project folder is mandatory
- Your code should use the Betty style
- No more than 5 functions per file
- Only the following C standard library functions are allowed: `malloc`, `free`, and `exit`
- The prototypes of all functions should be included in a header file called `lists.h`
- All header files should be include guarded

## Data Structure
Use this structure for this project:

```c
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```

## Files and Descriptions

| File | Description |
|------|-------------|
| `0-print_list.c` | Function that prints all the elements of a `list_t` list |
| `1-list_len.c` | Function that returns the number of elements in a linked `list_t` list |
| `2-add_node.c` | Function that adds a new node at the beginning of a `list_t` list |
| `3-add_node_end.c` | Function that adds a new node at the end of a `list_t` list |
| `4-free_list.c` | Function that frees a `list_t` list |
| `100-first.c` | Function that prints a message before main function is executed |
| `101-hello_holberton.asm` | 64-bit assembly program that prints "Hello, Holberton" followed by a new line |

## Function Prototypes

```c
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
```

## Tasks

### 0. Print list
Write a function that prints all the elements of a `list_t` list.
- Prototype: `size_t print_list(const list_t *h);`
- Return: the number of nodes
- If `str` is NULL, print `[0] (nil)`
- You are allowed to use `printf`

### 1. List length
Write a function that returns the number of elements in a linked `list_t` list.
- Prototype: `size_t list_len(const list_t *h);`

### 2. Add node
Write a function that adds a new node at the beginning of a `list_t` list.
- Prototype: `list_t *add_node(list_t **head, const char *str);`
- Return: the address of the new element, or NULL if it failed
- `str` needs to be duplicated
- You are allowed to use `strdup`

### 3. Add node at the end
Write a function that adds a new node at the end of a `list_t` list.
- Prototype: `list_t *add_node_end(list_t **head, const char *str);`
- Return: the address of the new element, or NULL if it failed
- `str` needs to be duplicated
- You are allowed to use `strdup`

### 4. Free list
Write a function that frees a `list_t` list.
- Prototype: `void free_list(list_t *head);`

### 5. The Hare and the Tortoise (Advanced)
Write a function that prints "You're beat! and yet, you must allow,\nI bore my house upon my back!\n" before the `main` function is executed.
- You are allowed to use the `constructor` attribute

### 6. Real programmers can write assembly code in any language (Advanced)
Write a 64-bit program in assembly that prints "Hello, Holberton", followed by a new line.
- You are only allowed to use the `printf` function
- You are not allowed to use interrupts
- Your program will be compiled using `nasm` and `gcc`
