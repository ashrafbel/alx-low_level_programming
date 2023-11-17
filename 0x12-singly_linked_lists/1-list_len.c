#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to head node
 * Rerurn: number of ellments
 */
size_t list_len(const list_t *h)
{
size_t L = 0;
while (h != NULL)
{
L++;
h = h->next;
}
return(L);
}
