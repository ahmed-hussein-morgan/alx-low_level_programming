#ifndef MAIN_H_
#define MAIN_H_

/**
 * struct dog - a dog struct
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner name of the dog
 *
 * Description - this is a dog id
*/
typedef struct dog
{

	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
