#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initialize the struct
 * @d: the struct object
 * @name: the dog name
 * @age: the dog age
 * @owner: the dog owner
 * Return: initialized struct
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
