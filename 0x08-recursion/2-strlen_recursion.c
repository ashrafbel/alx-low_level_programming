#include "main.h"


/**
 * -strlen_recursion - returns the length of a string
 * s@: the string of pointer
 * Return: lengh
 */
int _strlen_recursion(char *s)
{
int l = 0;

if (*s)
{
l++;
l += _strlen_recursion(s + 1);
}

return (l);

}
