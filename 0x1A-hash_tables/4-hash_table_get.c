#include "hash_tables.h"
/**
 * hash_table_get - Retrieves the value linked to a key in a hash table
 * @ht: A pointer to the hash table to search.
 * @key: The key to look for
 * Return: Value associated with the key, or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int IdX;
hash_node_t *Tp;

if (ht == NULL || key == NULL || strlen(key) == 0)
return (NULL);
IdX = key_index((const unsigned char *)key, ht->size);
Tp = ht->array[IdX];
while (Tp != NULL)
{
if (strcmp(Tp->key, key) == 0)
return (Tp->value);
Tp = Tp->next;
}
return (NULL);
}
