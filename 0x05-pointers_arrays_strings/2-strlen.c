#include "main.h"
/**
 * _strlen -  returns the length of a string
 * @s: the str
 * Return: Always 0 (Success)
*/
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	return (i);
}
