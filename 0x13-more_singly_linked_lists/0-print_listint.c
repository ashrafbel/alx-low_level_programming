#include "lists.h"
/**
 * print_listint - prints all the elements of a linked list
 * @h: pointer to the first node
 *
 * Return: node's number
 */
size_t print_listint(const listint_t *h)
{
size_t C = 0;

while (h)
{
printf("%d\n", h->n);
h = h->next;
C++;
}
return (C);
}

