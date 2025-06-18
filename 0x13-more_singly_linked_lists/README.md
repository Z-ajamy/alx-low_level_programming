# 0x13. C - More Singly Linked Lists

## Description
This project is a continuation of singly linked lists in C, focusing on more advanced operations and manipulations. Building upon the previous linked list project, this covers additional functions for managing linked lists including insertion at specific positions, deletion, and mathematical operations on list data.

## Learning Objectives
By the end of this project, you should be able to:
- Perform advanced operations on singly linked lists
- Implement insertion and deletion at specific positions
- Handle edge cases in linked list operations
- Apply mathematical operations to linked list data
- Understand memory management in complex linked list scenarios
- Reverse linked lists efficiently

## Requirements
### General
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
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```

## Project Files

| File | Description |
|------|-------------|
| `lists.h` | Header file containing all function prototypes and struct definitions |
| `0-print_listint.c` | Function that prints all the elements of a `listint_t` list |
| `1-listint_len.c` | Function that returns the number of elements in a linked `listint_t` list |
| `2-add_nodeint.c` | Function that adds a new node at the beginning of a `listint_t` list |
| `3-add_nodeint_end.c` | Function that adds a new node at the end of a `listint_t` list |
| `4-free_listint.c` | Function that frees a `listint_t` list |
| `5-free_listint2.c` | Function that frees a `listint_t` list and sets head to NULL |
| `6-pop_listint.c` | Function that deletes the head node and returns the head node's data |
| `7-get_nodeint.c` | Function that returns the nth node of a `listint_t` linked list |
| `8-sum_listint.c` | Function that returns the sum of all the data (n) of a `listint_t` linked list |
| `9-insert_nodeint.c` | Function that inserts a new node at a given position |
| `10-delete_nodeint.c` | Function that deletes the node at index of a `listint_t` linked list |
| `100-reverse_listint.c` | Function that reverses a `listint_t` linked list (Advanced) |

## Function Prototypes

```c
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
listint_t *reverse_listint(listint_t **head);
```

## Tasks

### 0. Print list
Write a function that prints all the elements of a `listint_t` list.
- **Prototype:** `size_t print_listint(const listint_t *h);`
- **Return:** the number of nodes
- **Format:** see example
- You are allowed to use `printf`

### 1. List length
Write a function that returns the number of elements in a linked `listint_t` list.
- **Prototype:** `size_t listint_len(const listint_t *h);`

### 2. Add node
Write a function that adds a new node at the beginning of a `listint_t` list.
- **Prototype:** `listint_t *add_nodeint(listint_t **head, const int n);`
- **Return:** the address of the new element, or NULL if it failed

### 3. Add node at the end
Write a function that adds a new node at the end of a `listint_t` list.
- **Prototype:** `listint_t *add_nodeint_end(listint_t **head, const int n);`
- **Return:** the address of the new element, or NULL if it failed

### 4. Free list
Write a function that frees a `listint_t` list.
- **Prototype:** `void free_listint(listint_t *head);`

### 5. Free
Write a function that frees a `listint_t` list.
- **Prototype:** `void free_listint2(listint_t **head);`
- The function sets the `head` to `NULL`

### 6. Pop
Write a function that deletes the head node of a `listint_t` linked list, and returns the head node's data (n).
- **Prototype:** `int pop_listint(listint_t **head);`
- If the linked list is empty return `0`

### 7. Get node at index
Write a function that returns the nth node of a `listint_t` linked list.
- **Prototype:** `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);`
- Where `index` is the index of the node, starting at `0`
- If the node does not exist, return `NULL`

### 8. Sum list
Write a function that returns the sum of all the data (n) of a `listint_t` linked list.
- **Prototype:** `int sum_listint(listint_t *head);`
- If the list is empty, return `0`

### 9. Insert
Write a function that inserts a new node at a given position.
- **Prototype:** `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);`
- Where `idx` is the index of the list where the new node should be added. Index starts at `0`
- Returns the address of the new node, or `NULL` if it failed
- If it is not possible to add the new node at index `idx`, do not add the new node and return `NULL`

### 10. Delete at index
Write a function that deletes the node at index `index` of a `listint_t` linked list.
- **Prototype:** `int delete_nodeint_at_index(listint_t **head, unsigned int index);`
- Where `index` is the index of the node that should be deleted. Index starts at `0`
- Returns `1` if it succeeded, `-1` if it failed

### 11. Reverse list (Advanced)
Write a function that reverses a `listint_t` linked list.
- **Prototype:** `listint_t *reverse_listint(listint_t **head);`
- Returns a pointer to the first node of the reversed list
- You are not allowed to use more than `1` loop
- You are not allowed to use `malloc`, `free` or arrays
- You can only declare a maximum of two variables in your function

## Compilation
All files are compiled with:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 *.c -o [executable_name]
```

## Testing
Each task includes a main file (e.g., `0-main.c`, `1-main.c`, etc.) for testing the respective functions. Use these to verify your implementations work correctly.

## Memory Management
- Always free allocated memory to prevent memory leaks
- Handle edge cases like empty lists, single-node lists, and invalid indices
- Use proper error checking for malloc failures
- Set pointers to NULL after freeing when appropriate
