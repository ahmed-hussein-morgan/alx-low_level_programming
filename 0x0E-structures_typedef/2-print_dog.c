#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print data of the dog
 * @d: the dog strucr
 * Return: printedt data
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	else if (d->age == '\0')
	{
		printf("Age: (nil)");
	}
	else if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
	else
	{
		printf("Name: %s\n", (*d).name);
		printf("Age: %.1f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner);
	}
}
