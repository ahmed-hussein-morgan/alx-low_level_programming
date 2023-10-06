#include "main.h"
/**
 * create_array - creates an array of chars initialized with specific char
 * @size: size of array
 * @c: the char
 * Return: a pointer to allocated memory
*/
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(size * sizeof(char));
	if (!s)
	{
		return (NULL);
	}
	for (; i < size; i++)
	{
		s[i] = c;
		/*i++;*/
		/*s++;*/
	}
	return (s);
}
