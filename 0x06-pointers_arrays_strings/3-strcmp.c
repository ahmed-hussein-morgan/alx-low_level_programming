#include "main.h"
/**
 * _strcmp -  compares two strings.
 * @s1: first str
 * @s2: second str
 * Return: comparison result
*/
int _strcmp(char *s1, char *s2)
{
	int i, j;

	j = 0;
	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			j += (s1[i] - s2[i]);
		}
	}

	return (j);
}
