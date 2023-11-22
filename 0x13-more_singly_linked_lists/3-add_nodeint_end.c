#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first node
 * @n: pointer to the new element
 *
 * Return: pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
 listint_t *NewNode = malloc(sizeof(listint_t));
 listint_t *tp = *head;

if (!NewNode)
return (NULL);
NewNode->n = n;
NewNode->next = NULL;
if (!*head)
{
*head = NewNode;
return (NewNode);
}
while (tp->next)
tp = tp->next;
tp->next = NewNode;

return (NewNode);
}

