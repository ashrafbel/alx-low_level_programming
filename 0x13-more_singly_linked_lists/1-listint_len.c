#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: ponter to the first node
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t C = 0;

while (h)
{
C++;
h = h->next;
}
return (C);
}
