#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees all nodes of list
 * @head: pointer t head node
 */
void free_list(list_t *head)
{
list_t *N;

while (head)
{
N = head->next;
free(head->str);
free(head);
head = N;
}
}

