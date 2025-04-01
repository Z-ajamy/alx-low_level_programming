#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add or update the key/value in.
 * @key: The key (cannot be an empty string).
 * @value: The value associated with the key (must be duplicated).
 *
 * Return: 1 if successful, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *curr, *new_node;
    char *new_value;

    /* التحقق من صحة المدخلات */
    if (!ht || !key || strlen(key) == 0 || !value)
        return (0);

    /* حساب الفهرس */
    index = key_index((const unsigned char *)key, ht->size);
    curr = ht->array[index];

    /* البحث عن المفتاح في القائمة المرتبطة */
    while (curr)
    {
        if (strcmp(curr->key, key) == 0)
        {
            /* تحديث القيمة */
            new_value = strdup(value);
            if (!new_value)
                return (0);
            free(curr->value);
            curr->value = new_value;
            return (1);
        }
        curr = curr->next;
    }

    /* المفتاح غير موجود، إنشاء عنصر جديد */
    new_node = create_item(key, value);
    if (!new_node)
        return (0);

    /* إدراج العقدة الجديدة في بداية القائمة */
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return (1);
}

/**
 * create_item - Creates a new hash table node.
 * @key: The key to store (must be duplicated).
 * @val: The value associated with the key.
 *
 * Return: Pointer to the new node, or NULL on failure.
 */
hash_node_t *create_item(const char *key, const char *val)
{
    hash_node_t *item;

    item = (hash_node_t *)malloc(sizeof(hash_node_t));
    if (!item)
        return (NULL);

    item->key = strdup(key);
    if (!item->key)
    {
        free(item);
        return (NULL);
    }

    item->value = strdup(val);
    if (!item->value)
    {
        free(item->key);
        free(item);
        return (NULL);
    }

    item->next = NULL;
    return (item);
}

/**
 * free_item - Frees a hash table node.
 * @item: The node to free.
 */
void free_item(hash_node_t *item)
{
    if (!item)
        return;
    free(item->key);
    free(item->value);
    free(item);
}
