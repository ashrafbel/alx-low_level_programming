#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t
 * @head: Pointer to the address of the head of dlistintt
 * @index: Index of the node should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *Tp, *prev;
unsigned int X = 0;

if (head == NULL || *head == NULL)
return (-1);
Tp = *head;
if (index == 0)
{
*head = Tp->next;
if (*head != NULL)
(*head)->prev = NULL;
free(Tp);
return (1);
}
while (Tp != NULL && X < index)
{
prev = Tp;
Tp = Tp->next;
X++;
}
if (Tp == NULL)
return (-1);
prev->next = Tp->next;
if (Tp->next != NULL)
Tp->next->prev = prev;
free(Tp);
return (1);
}
