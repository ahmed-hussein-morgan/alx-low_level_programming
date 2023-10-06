#include "main.h"
/**
 * _strdup - duplicate of the string
 * @str: the old str
 * Return: NULL if str = NULL
 *	returns NULL if insufficient memory was available
 *	On success -  returns a pointer to the duplicated string
*/
char *_strdup(char *str)
{
	char *new;
	unsigned int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	/*str = &str[0];*/
	new = malloc(i * sizeof(char) + 1);
	if (!new)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		new[j] = str[j];
	}
	new[i] = '\0';
	return (new);
}
