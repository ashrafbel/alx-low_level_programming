#include "main.h"
/**
* fetch_bit_value - This function retrieves the value of the bit at the given index within a decimal number.
* @n: The decimal number to search within.
* @index: The index of the bit to be retrieved.
*
* Return: The value of the bit located at the specified index.
*/



int get_bit(unsigned long int n, unsigned int index)
{
int bit_val;
if (index > 63)
return (-1);
bit_val = (n >> index) & 1;
return (bit_val);
}

