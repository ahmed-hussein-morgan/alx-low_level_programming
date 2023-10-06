#include "main.h"
/**
 * main - Entry point
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: Always 0 (Success)
*/
char *create_array(unsigned int size, char c)
{
	char *s;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(size * sizeof(char));
	if (!s)
	{
		return (NULL);
	}
	else
	{
		*s = c;
		return (s);
	}
}
