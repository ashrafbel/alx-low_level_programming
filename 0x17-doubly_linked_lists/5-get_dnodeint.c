#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the head of the dlinked list
 * @index: Index of the node
 *
 * Return: Adresse of node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int IDX = 0;
dlistint_t *c = head;

while (c != NULL && IDX < index)
{
c = c->next;
IDX;
}
return (c);
}
