#include "hash_tables.h"
/**
 * hash_table_delete - Ht deleted
 * @ht: hash table to be deleted.
 */
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *n;
unsigned long int a;

if (ht == NULL || ht->size == NULL || ht->array == NULL)
return;

for(a = 0; a < ht->size; a++){
while (ht->array[a] != NULL)
{
n = ht->array[a]->n
free(ht->array[a]->key);
free(ht->array[a]->value);
free(ht->array[a]);
ht->array[a] = n;
}
}
free(ht->array);
ht->array = NULL;
ht->size = 0;
}
