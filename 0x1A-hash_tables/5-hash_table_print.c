#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: Pointer to the hash table
 *
 * Description: This function prints the key-value pairs stored in
 * the hash table in a dictionary-like format.
 */
void hash_table_print(const hash_table_t *ht)
{
    hash_node_t *ptr;      /* Pointer to traverse the linked list */
    unsigned long int i;   /* Loop variable to iterate through the array */
    char flag = 1;         /* Flag to control comma placement */

    /* Check if the hash table is NULL */
    if (!ht)
        return;

    /* Print the opening brace for the dictionary format */
    printf("{");

    /* Iterate through the hash table array */
    for (i = 0; i < ht->size; i++)
    {
        ptr = ht->array[i];

        /* Traverse the linked list at the current index */
        while (ptr)
        {
            /* Print a comma before printing a new key-value pair */
            if (!flag)
                printf(", ");
            flag = 0;
            
            /* Print the key-value pair in dictionary format */
            printf("'%s': '%s'", ptr->key, ptr->value);
            
            /* Move to the next node in the linked list */
            ptr = ptr->next;
        }
    }

    /* Print the closing brace for the dictionary format */
    printf("}\n");
}
