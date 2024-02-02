#include "hash_tables.h"
/**
 * hash_table_create - hASH TAbles created
 * @size: Arayy size
 * Return: new hash tables or Null
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *NEWHT;
unsigned long int IdX;

NEWHT = malloc(sizeof(hash_table_t));
if (NEWHT == NULL)
return (NULL);

NEWHT->size = size;
NEWHT->array = malloc(sizeof(hash_node_t *) * size);
if (NEWHT->array == NULL)
return (NULL);
for (IdX = 0; IdX < size; IdX++)
NEWHT->array[IdX] = NULL;
return (NEWHT);
}

