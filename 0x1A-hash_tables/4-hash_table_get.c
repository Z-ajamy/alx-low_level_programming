#include"hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
    int index;
    hash_node_t *ptr, *p;


    if (!ht || !key || key[0] == '\0')
        return NULL;
    index = key_index((const unsigned char *)key, ht->size);
    ptr = ht->array[index];
    if (!ptr)
        return NULL;
    while (ptr)
    {
        p = ptr;
        if (strcmp(ptr->key, key) == 0)
        {
            return ptr->value;
        }
        ptr = p->next;
    }
    return NULL;
    
}
