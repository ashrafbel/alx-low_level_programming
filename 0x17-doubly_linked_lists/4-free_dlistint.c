#include "lists.h"
/**
 * free_dlistint - frees a dlistint
 * @head: Pointer to the head of the dlinked list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *Tp;

while (head)
{
Tp = head;
head = head->next;
free(Tp);
}
}

