#include "main.h"
#include <stdlib.h>

/**
 * str_concat - contains the contents of s1, followed by the contents of s2
 * @s1: First input string.
 * @s2: Second input string.
 * Return: Concatenated string of s1 and s2.
 */
char *str_concat(char *s1, char *s2)
{
char *result;
int a, b;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
b = a = 0;
while (s1[a] != '\0')
a++;
while (s2[b] != '\0')
b++;
result = malloc(sizeof(char) * (a + b + 1));
if (result == NULL)
return (NULL);
a = b = 0;
while (s1[a] != '\0')
{
result[a] = s1[a];
a++;
}
while (s2[b] != '\0')
{
result[a] = s2[b];
a++, b++;
}
result[a] = '\0';
return (result);

}

