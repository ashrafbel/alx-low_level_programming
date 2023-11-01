#include "main.h"



/**
 * _strstr - locates a substring within a string
 * @haystack: The string to search in
 * @needle: The substring to search for
 * Return: always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *a = haystack;
char *b = needle;

while (*a == *b && *b != '\0')
{
a++;
b++;
}

if (*b == '\0')
return (haystack);

haystack++;
}
return (0);
}

