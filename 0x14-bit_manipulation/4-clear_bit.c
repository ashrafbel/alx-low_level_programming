#include "main.h"
#include <stdlib.h>
/**
* clear_bit - Clears the value of a bit to 0 at a given index
* @n: the number to index
* @index: index
* Return: 1 if success, -1 if error
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int s = ~(1 << index);
if (index > sizeof(n) * 8)
return (-1);
*n &= s;
return (1);
}

