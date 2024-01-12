#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: adress of head of the doubly linked list.
 * @n: int to be assigned to the new node.
 * Return: the address of the new element, or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *NE_W = malloc(sizeof(dlistint_t));

if (NE_W == NULL)
return (NULL);

NE_W->n = n;
NE_W->prev = NULL;
NE_W->next = *head;

if (*head != NULL)
{
(*head)->prev = NE_W;
}
*head = NE_W;
return (NE_W);
}
