#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: Pointer to the hash table
 * @key: The key (string), cannot be an empty string
 * @value: The value associated with the key
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *curr;
    hash_node_t *item;

    /* Check if the hash table, key, or key length is invalid */
    if (!ht || !key || strlen(key) == 0)
        return (0);

    /* Compute the index where the key should be stored */
    index = key_index((const unsigned char *)key, ht->size);

    /* Create a new item with the given key-value pair */
    item = create_item(key, value);
    if (!item)
        return (0);

    /* Retrieve the current node at the computed index */
    curr = ht->array[index];

    /* If the slot is empty, place the new node there */
    if (!curr)
    {
        ht->array[index] = item;
        return (1);
    }
    else
    {
        /* If the key already exists, update its value */
        if (strcmp(curr->key, item->key) == 0)
        {
            char *p;

            p = malloc(sizeof(char) * (strlen(value) + 1));
            if (!p)
            {
                free_item(item);
                return (0);
            }

            strcpy(p, value);
            free(curr->value);
            curr->value = p;
            free_item(item);

            return (1);
        }
        else
        {
            /* If the key does not exist, insert it at the beginning */
            hash_node_t *ptr = ht->array[index];
            ht->array[index] = item;
            item->next = ptr;
            return (1);
        }
    }
}

/**
 * create_item - Creates a new hash table node
 * @key: The key (string), cannot be an empty string
 * @val: The value associated with the key
 *
 * Return: Pointer to the newly allocated node, or NULL on failure
 */
hash_node_t *create_item(const char *key, const char *val)
{
    unsigned long int i;
    hash_node_t *item = NULL;

    /* Allocate memory for the new node */
    item = malloc(sizeof(hash_node_t));
    if (!item)
        return (NULL);
    
    item->next = NULL;

    /* Allocate memory for the key */
    item->key = malloc(sizeof(char) * (strlen(key) + 1));
    if (!(item->key))
    {
        free(item);
        return (NULL);
    }
    for (i = 0; i < (strlen(key) + 1); i++)
    {
        item->key[i] = 0;
    }
    
    /* Allocate memory for the value */
    item->value = malloc(sizeof(char) * (strlen(val) + 1));
    if (!(item->value))
    {
        free(item->key);
        free(item);
        return (NULL);
    }
    for (i = 0; i < (strlen(val) + 1); i++)
    {
        item->value[i] = 0;
    }
    
    /* Copy key and value into the allocated memory */
    strcpy(item->key, key);
    strcpy(item->value, val);

    return (item);
}

/**
 * free_item - Frees a hash table node
 * @item: The node to free
 *
 * Description: This function deallocates the memory associated with
 * a hash node, including the key, value, and the node itself.
 */
void free_item(hash_node_t *item)
{
    if (!item)
        return;
    
    /* Free the key and value memory */
    free(item->key);
    free(item->value);
    
    /* Free the node itself */
    free(item);
    item = NULL;
}
