#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: pointer to first to be free
 */
void free_listint(listint_t *head)
{
listint_t *tp;

while (head)
{
tp = head->next;
head = tp;
free(tp);
}
}

