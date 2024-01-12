#include "lists.h"
/**
 * dlistint_len - returns the number of elements in dlistint
 * @h: head node adresse
 *
 * Return: the number elements list
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t Ct = 0;

while (h != NULL)
{
Ct++;
h = h->next;
}
return (Ct);
}
