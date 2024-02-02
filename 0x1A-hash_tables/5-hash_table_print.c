#include "hash_tables.h"
/**
 * hash_table_print - hash table printed
 * @ht: hash table to print.
 */
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *Tp;
unsigned long int a;

int fpd = 0;
if (ht == NULL)
return;
printf("{");
for (a = 0; a < ht->size; a++)
{
Tp = ht->array[a];
while (Tp != NULL)
{
if (fpd == 1)
printf(", ");
printf("'%s': '%s'", Tp->key, Tp->value);
fpd = 1;
Tp = Tp->next;
}
}
printf("}\n");
}
