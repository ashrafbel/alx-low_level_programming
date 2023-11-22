#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: pointer to firstto be freed
 */
void free_listint(listint_t *head)
{
listint_t *T_P;

while (head)
{
T_P = head->next;
head = T_P;
free(head);
}
}

