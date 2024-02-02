#include "hash_tables.h"
/**
 * key_index - Get hash index for a key in a table
 * @key: The key to determine the index for.
 * @size: The size of the array in the hash table.
 * Return: The calculated index for the given key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
