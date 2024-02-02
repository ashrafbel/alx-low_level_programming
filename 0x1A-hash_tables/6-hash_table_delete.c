#include "hash_tables.h"
/**
 * hash_table_delete - Ht deleted
 * @ht: hash table to be deleted.
 */
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *current, *Tp;
unsigned long int a;

if (!ht)
return;
for (a = 0; a < ht->size; a++)
{
current = ht->array[a];
while (current)
{
Tp = current;
current = current->next;
free(Tp->key);
free(Tp->value);
free(Tp);
}
}
free(ht);
}

