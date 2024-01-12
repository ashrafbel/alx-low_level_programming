#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data of a dlist
 * @head: Pointer to the head the dlinked list
 * Return: the sum of all the data, or 0
 */
int sum_dlistint(dlistint_t *head)
{
dlistint_t *c = head;
int x = 0;

while (c)
{
x += c->n;
c = c->next;
}
return (x);
}
