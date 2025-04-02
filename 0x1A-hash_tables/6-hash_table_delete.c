#include"hash_tables.h"

void hash_table_delete(hash_table_t *ht)
{
    hash_node_t *ptr, *n;
    unsigned long int i;

    if (!ht)
        return;
    for (i = 0; i < ht->size; i++)
    {
        ptr = ht->array[i];
        while (ptr)
        {
            n = ptr;
            ptr = ptr->next;
            free(n->key);
            free(n->value);
            free(n);
        }
    }
    free(ht->array);
    free(ht);
}
