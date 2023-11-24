#include "main.h"
/**
* get_endianness - checks the endianness of the system
*
* Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
char *j;
int k;

k = 1;
j = (char *)&k;
return (*j);
}
