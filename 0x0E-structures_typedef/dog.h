#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog Structures
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: owner's dog
 *
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
