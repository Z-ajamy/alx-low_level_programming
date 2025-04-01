#include"hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    int index = key_index((const unsigned char *)key, ht->size);
    hash_node_t *curr;
    hash_node_t *item;

    if (!ht || !key)
        return 0;

    item = creat_item(key, value);
    if (!item)
        return 0;

    curr = ht->array[index];
    if (!curr)
    {
        ht->array[index] = item;
        return 1;
    }
    else
    {
        if (strcmp(curr->key, item->key) == 0)
        {
            strcpy (curr->value, value);
            free_item(item);
            return 1;
        }
        else
        {
            hash_node_t *ptr = ht->array[index];
            ht->array[index] = item;
            item->next = ptr;
            return 1;
        }
    }
}

hash_node_t *creat_item(const char *key, const char *val)
{
    hash_node_t *item = NULL;

    item = (hash_node_t *)calloc(1, sizeof(hash_node_t));
    if (!item)
        return NULL;
    
    item->next = NULL;
    item ->key = (char *)calloc(1, (sizeof(char) * strlen(key)) + 1);
    if (!(item->key))
    {
        free(item);
        return NULL;
    }
    item->value = (char *)calloc(1, sizeof(char) * strlen(val) + 1);
    if (!(item->value))
    {
        free(item->key);
        free(item);
        return NULL;
    }
    
    strcpy(item->key, key);
    strcpy(item->value, val);

    return item;
}

void free_item(hash_node_t *item)
{
    if (!item)
        return;
    free(item->key);
    free(item->value);
    free(item);
}
