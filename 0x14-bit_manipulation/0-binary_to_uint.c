#include "main.h"

/**
* binary_to_uint_custom - This function converts a binary number into 
* @b: A string representation of the binary number.
*
*  Return: The converted unsigned int value.
*/
unsigned int binary_to_uint(const char *b)
{
int y;
unsigned int dec_val = 0;
if (!b)
return (0);
for (i = 0; b[y]; y++)
{
if (b[y] < '0' || b[y] > '1')
return (0);
dec_val = 2 * dec_val + ([y] - '0');
}
return (dec_val);
}

