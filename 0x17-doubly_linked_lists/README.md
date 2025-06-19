# 0x17. C - Doubly Linked Lists

## Description
This project focuses on implementing and manipulating doubly linked lists in C. A doubly linked list is a data structure where each node contains data and two pointers: one pointing to the next node and another pointing to the previous node. This bidirectional linking allows for more efficient traversal and manipulation compared to singly linked lists.

## Learning Objectives
By the end of this project, you should be able to:
- Understand what a doubly linked list is
- Know when and why to use doubly linked lists vs singly linked lists
- Implement various operations on doubly linked lists
- Traverse doubly linked lists in both directions
- Handle edge cases in doubly linked list operations
- Apply proper memory management for doubly linked lists

## Requirements
### General
- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc with options: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- A `README.md` file at the root of the project folder is mandatory
- Your code should use the Betty style (checked using `betty-style.pl` and `betty-doc.pl`)
- No more than 5 functions per file
- Only the following C standard library functions are allowed: `malloc`, `free`, `printf`, and `exit`
- The prototypes of all functions should be included in a header file called `lists.h`
- All header files should be include guarded

## Data Structure
Use this structure for this project:

```c
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

## Function Prototypes

```c
size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
```

## Project Files

| File | Description |
|------|-------------|
| `lists.h` | Header file containing all function prototypes and struct definitions |
| `0-print_dlistint.c` | Function that prints all the elements of a `dlistint_t` list |
| `1-dlistint_len.c` | Function that returns the number of elements in a linked `dlistint_t` list |
| `2-add_dnodeint.c` | Function that adds a new node at the beginning of a `dlistint_t` list |
| `3-add_dnodeint_end.c` | Function that adds a new node at the end of a `dlistint_t` list |
| `4-free_dlistint.c` | Function that frees a `dlistint_t` list |
| `5-get_dnodeint.c` | Function that returns the nth node of a `dlistint_t` linked list |
| `6-sum_dlistint.c` | Function that returns the sum of all the data (n) of a `dlistint_t` linked list |
| `7-insert_dnodeint.c` | Function that inserts a new node at a given position |
| `8-delete_dnodeint.c` | Function that deletes the node at index of a `dlistint_t` linked list |

## Tasks

### 0. Print list
Write a function that prints all the elements of a `dlistint_t` list.
- **Prototype:** `size_t print_dlistint(const dlistint_t *h);`
- **Return:** the number of nodes
- **Format:** see example
- You are allowed to use `printf`

**Example:**
```c
0
1
2
3
4
98
402
1024
```

### 1. List length
Write a function that returns the number of elements in a linked `dlistint_t` list.
- **Prototype:** `size_t dlistint_len(const dlistint_t *h);`

### 2. Add node
Write a function that adds a new node at the beginning of a `dlistint_t` list.
- **Prototype:** `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
- **Return:** the address of the new element, or NULL if it failed

### 3. Add node at the end
Write a function that adds a new node at the end of a `dlistint_t` list.
- **Prototype:** `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`
- **Return:** the address of the new element, or NULL if it failed

### 4. Free list
Write a function that frees a `dlistint_t` list.
- **Prototype:** `void free_dlistint(dlistint_t *head);`

### 5. Get node at index
Write a function that returns the nth node of a `dlistint_t` linked list.
- **Prototype:** `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`
- Where `index` is the index of the node, starting at `0`
- If the node does not exist, return `NULL`

### 6. Sum list
Write a function that returns the sum of all the data (n) of a `dlistint_t` linked list.
- **Prototype:** `int sum_dlistint(dlistint_t *head);`
- If the list is empty, return `0`

### 7. Insert at index
Write a function that inserts a new node at a given position.
- **Prototype:** `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`
- Where `idx` is the index of the list where the new node should be added. Index starts at `0`
- Returns the address of the new node, or `NULL` if it failed
- If it is not possible to add the new node at index `idx`, do not add the new node and return `NULL`

### 8. Delete at index
Write a function that deletes the node at index `index` of a `dlistint_t` linked list.
- **Prototype:** `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`
- Where `index` is the index of the node that should be deleted. Index starts at `0`
- Returns `1` if it succeeded, `-1` if it failed

## Key Concepts

### Doubly Linked List Advantages
- **Bidirectional traversal:** Can traverse in both forward and backward directions
- **Efficient deletion:** Can delete a node in O(1) time if you have a pointer to it
- **Better insertion:** Can insert before a given node more efficiently

### Doubly Linked List Disadvantages
- **Extra memory:** Requires additional memory for the prev pointer
- **More complex:** More complex implementation due to maintaining two pointers

### Important Considerations
- Always update both `next` and `prev` pointers when modifying the list
- Handle edge cases like empty lists, single-node lists, and boundary conditions
- Ensure proper memory management to prevent memory leaks
- Maintain list integrity by properly linking nodes

## Memory Management
- Always check if `malloc` succeeds before using allocated memory
- Free all allocated memory when the list is no longer needed
- Set pointers to `NULL` after freeing to avoid dangling pointers
- Handle edge cases where the list might be empty or have only one node

## Compilation
All files are compiled with:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 *.c -o [executable_name]
```

## Testing
Create main files to test each function:
```c
#include "lists.h"

int main(void)
{
    dlistint_t *head;
    
    head = NULL;
    // Test your functions here
    
    return (0);
}
```

## Betty Style
Make sure your code passes the Betty style checker:
```bash
betty-style.pl *.c *.h
betty-doc.pl *.c *.h
```
