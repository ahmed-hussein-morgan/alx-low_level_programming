#include "dog.h"
#include <stdlib.h>



dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr1;
	dog_t *ptr2;

	ptr1 = malloc(sizeof(dog_t));
	ptr2 = malloc(sizeof(dog_t));

	if (ptr1 == NULL || ptr2 == NULL)
	{
		/*free(ptr);*/
		return(NULL);
	}
	ptr2->name = name;
	ptr2-> age = age;
	ptr2->owner = owner;
	return (ptr2);
}
