#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - sdds a new node at the end of a linked list.
 * @head: Pointer to the address of the first of the list
 * @str: String new to add node
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *NewNode, *EndNode;

if (str == NULL)
return (NULL);

NewNode = malloc(sizeof(list_t));
if (NewNode == NULL)
return (NULL);

NewNode->str = strdup(str);
if (NewNode->str == NULL)
{
free(NewNode);
return (NULL);
}
NewNode->len = strlen(str);
NewNode->next = NULL;
if (*head == NULL)
{
*head = NewNode;
}
else
{
EndNode = *head;
while (EndNode->next != NULL)
{
EndNode = EndNode->next;
}
EndNode->next = NewNode;
}
return (NewNode);
}

