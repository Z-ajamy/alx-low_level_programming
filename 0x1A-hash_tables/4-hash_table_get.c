#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key in a hash table
 * @ht: Pointer to the hash table
 * @key: The key to search for
 *
 * Return: The value associated with the key, or NULL if the key is not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    int index;              /* Variable to store the computed index */
    hash_node_t *ptr, *p;   /* Pointers to traverse the linked list */

    /* Validate input parameters */
    if (!ht || !key || key[0] == '\0')
        return (NULL);

    /* Compute the index of the key in the hash table */
    index = key_index((const unsigned char *)key, ht->size);
    ptr = ht->array[index];

    /* If no element exists at the computed index, return NULL */
    if (!ptr)
        return (NULL);

    /* Traverse the linked list to search for the key */
    while (ptr)
    {
        p = ptr;

        /* If the key matches, return its corresponding value */
        if (strcmp(ptr->key, key) == 0)
        {
            return (ptr->value);
        }

        /* Move to the next node in the linked list */
        ptr = p->next;
    }

    /* If key is not found, return NULL */
    return (NULL);
}
