#include "main.h"
/**
* clear_bit - Sets the value of a specified bit to 0.
* @n: A pointer to the number that will be modified.
* @index: The index of the bit to be cleared.
*
* Return: 1 if the operation is successful, -1 if it fails.
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

