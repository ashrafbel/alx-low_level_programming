#include "lists.h"
/**
 * print_dlistint - all the elements of a dlistint_t list printed
 * @h: double linked adress of head node
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t Ct = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
Ct;
}
return (Ct);
}
