#include"hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index = key_index((const unsigned char *)key, ht->size);
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
            char *p = curr->value;
            curr->value = (char *)malloc(sizeof(char) * strlen(value) + 1);
            if (!(curr->value))
            {
                free_item(item);
                return 0;
            }
            strcpy (curr->value, value);
            free(p);
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
    long unsigned int i;
    hash_node_t *item = NULL;

    item = (hash_node_t *)malloc(sizeof(hash_node_t));
    if (!item)
        return NULL;
    
    item->next = NULL;
    item ->key = (char *)malloc((sizeof(char) * strlen(key)) + 1);
    if (!(item->key))
    {
        free(item);
        return NULL;
    }
    for (i = 0; i < ((sizeof(char) * strlen(key)) + 1); i++)
    {
        item->key[i] = 0;
    }
    
    item->value = (char *)malloc(sizeof(char) * strlen(val) + 1);
    if (!(item->value))
    {
        free(item->key);
        free(item);
        return NULL;
    }
    for (i = 0; i < (sizeof(char) * strlen(val) + 1); i++)
    {
        item->value[i] = 0;
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
