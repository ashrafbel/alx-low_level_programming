#include <stdlib.h>
#include "dog.h"


/**
* _strlen - returns the length of a string
* @s: string to get length
* Return: the length
*/
int _strlen(char *s)
{
int k;
for (k = 0; s[k] != '\0'; k++)
{
}
return (k);
}

/**
* _strcpy - use src to copies the string pointed
 * @dest: coppy string to here
 * @src: string to be copied
 *
 * Return: dest
*/
	char *_strcpy(char *dest, char *src)
{
int l, m;

l = 0;
while (src[l] != '\0')
{
l++;
}
for (m = 0; m < l; m++)
{
dest[m] = src[m];
}
dest[m] = '\0';
return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int l1, l2;

l1 = _strlen(name);
l2 = _strlen(owner);

dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);


dog->name = malloc(sizeof(char) * (l1 + 1));
if ((*dog).name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (l2 + 1));
if ((*dog).owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}


