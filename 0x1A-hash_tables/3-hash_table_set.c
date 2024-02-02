#include "hash_tables.h"
/**
 * hash_table_set - add or update an element in a hash table
 * @ht: A pointer to the hash table
 * @key: The non-empty key to add or update
 * @value: The value corresponding to the given key
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int Idx;
unsigned long int x;
hash_node_t *NEW;
char *newVal;

if (ht == NULL || key == NULL || *key == NULL || value == NULL)
return (0);

newVal = strdup(value);
if (newVal == NULL)
return (0);

Idx = key_index((const unsigned char *)key, ht->size);
for (x = Idx; ht->array[x]; x++)
{
if (strcmp(ht->array[x]->key, key) == 0)
{
free(ht->array[x]->value);
ht->array[x]->value = newVal;
return (1);
}
}

NEW = malloc(sizeof(hash_node_t));
if (NEW == NULL)
{
free(newVal);
return (0);
}
NEW->key = strdup(key);
if (NEW->key == NULL)
{
free(NEW);
return (0);
}
NEW->value = newVal;
NEW->next = ht->array[Idx];
ht->array[Idx] = NEW;
return (1);
}
