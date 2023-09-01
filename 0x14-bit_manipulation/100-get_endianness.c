#include "main.h"

/**
* get_endianness - Determines machine's endianness (little/big).
* Return: Returns 0 for big-endian and 1 for little-endian.
*/
int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *) &a;

	return (*c);
}

