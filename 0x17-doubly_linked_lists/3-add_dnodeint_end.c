#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of dlist
 * @head: adrss_pointer to the head of the dlinked
 * @n: Value to be assigned to the new node.
 * Return: address of the new element, or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *NE_W = malloc(sizeof(dlistint_t));
dlistint_t *Tp;

if (!NE_W)
return (NULL);

NE_W->n = n;
NE_W->next = NULL;

if (*head == NULL)
{
NE_W->prev = NULL;
*head = NE_W;
return (NE_W);
}
Tp = *head;
while (Tp->next)
{
Tp = Tp->next;
}
Tp->next = NE_W;
NE_W->prev = Tp;
return (NE_W);
}
