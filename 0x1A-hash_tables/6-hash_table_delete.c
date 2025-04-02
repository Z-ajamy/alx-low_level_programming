#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: Pointer to the hash table
 *
 * Description: This function frees all memory associated with the hash table,
 * including all nodes, keys, values, and the table itself.
 */
void hash_table_delete(hash_table_t *ht)
{
    hash_node_t *ptr, *n;  /* Pointers to traverse and delete nodes */
    unsigned long int i;   /* Loop variable to iterate through the array */

    /* Check if the hash table is NULL */
    if (!ht)
        return;

    /* Iterate through the hash table array */
    for (i = 0; i < ht->size; i++)
    {
        ptr = ht->array[i];

        /* Free all nodes in the linked list at the current index */
        while (ptr)
        {
            n = ptr;
            ptr = ptr->next;
            
            /* Free the key, value, and node itself */
            free(n->key);
            free(n->value);
            free(n);
        }
    }

    /* Free the array and the hash table structure */
    free(ht->array);
    free(ht);
}
