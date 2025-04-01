# Hash Tables in C

## Description
This project focuses on implementing hash tables in C. It covers fundamental operations such as creating a hash table, adding elements, retrieving values, printing the table, and deleting it. Additionally, it explores the use of different hash functions.

## Files

| Filename | Description |
|----------|-------------|
| `0-hash_table_create.c` | Implements a function to create a hash table. |
| `1-djb2.c` | Implements the `djb2` hashing algorithm. |
| `2-key_index.c` | Computes the index of a key in the hash table using a hashing function. |
| `3-hash_table_set.c` | Implements the insertion of key-value pairs into the hash table. |
| `4-hash_table_get.c` | Retrieves a value associated with a key in the hash table. |
| `5-hash_table_print.c` | Prints the entire hash table. |
| `6-hash_table_delete.c` | Deletes the hash table and frees allocated memory. |
| `hash_tables.h` | Header file containing function prototypes and struct definitions. |
| `README.md` | This documentation file. |

## Usage
To compile the files, use `gcc`:
```sh
gcc -Wall -Werror -Wextra -pedantic *.c -o hash_table
```

## Example
```c
#include "hash_tables.h"

int main(void)
{
    hash_table_t *ht = hash_table_create(1024);
    hash_table_set(ht, "name", "Alice");
    printf("%s\n", hash_table_get(ht, "name"));
    hash_table_print(ht);
    hash_table_delete(ht);
    return (0);
}
```

## Author
* ALX Software Engineering Program
