#include "hash_tables.h"

/**
 * key_index - Returns the index of a key in a hash table
 * @key: The key to compute the index for
 * @size: The size of the hash table
 *
 * Return: The index where the key should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    return (hash_djb2(key) % size);
}
