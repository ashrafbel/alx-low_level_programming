#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: The number to index
 * @index: The index of the bit to get
 *
 * Return: The value of the bit at the given index
 */
int get_bit(unsigned long int n, unsigned int index)

{
int b;
if (index >= sizeof(unsigned long int) * 8)
return (-1);

b = (n >> index) & 1;
return (b);
}
