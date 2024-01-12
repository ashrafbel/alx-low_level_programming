#include "lists.h"
/**
 * insert_dnodeint_at_index - insert new node at a given position in a dlstin_t
 * @h: pointer to the address of the head of the dlinked list.
 * @idx: integer for the new node should be added
 * @n: Value to be assigned to the new node
 * Return: The address of the new node, or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *NE_W, *Tp;
unsigned int X = 0;

if (!h)
return (NULL);

NE_W = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

NE_W->n = n;
NE_W->prev = NULL;
NE_W->next = NULL;

if (idx == 0)
{
NE_W->next = *h;
if (*h != NULL)
(*h)->prev = NE_W;
*h = NE_W;
return (NE_W);
}
Tp = *h;
while (Tp != NULL && i < idx - 1)
{
Tp = Tp->next;
X++;
}
if (Tp == NULL)
{
free(NE_W);
return (NULL);
}
NE_W->next = Tp->next;
NE_W->prev = Tp;
if (NE_W->next != NULL)
NE_W->next->prev = NE_W;
NE_W->next = NE_W;
return (NE_W);
}

