#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: Pointer to the address of the first of the list.
 * @str: String to be duplicated and assigned to the new node.
 *
 * Return: The address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *NewNode;

if (str == NULL)
return NULL;

NewNode = malloc(sizeof(list_t));
if (NewNode == NULL)
return NULL;

NewNode->str = strdup(str);
if (NewNode->str == NULL)
{
free(NewNode);
return NULL;
}
NewNode->len = strlen(str);
NewNode->next = *head;
*head = NewNode;
return NewNode;
}

