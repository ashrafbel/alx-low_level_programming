#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *NewNode = malloc(sizeof(listint_t));

if (!NewNode)
return (NULL);

NewNode->n = n;
NewNode->next = *head;
*head = NewNode;

return (NewNode);
}

