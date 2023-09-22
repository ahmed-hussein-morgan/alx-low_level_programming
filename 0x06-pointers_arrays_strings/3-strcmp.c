#include "main.h"
/**
 * _strcmp -  compares two strings.
 * @s1: first str
 * @s2: second str
 * Return: comparison result
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	if (*s1 == '\0' || *s2 == '\0')
	{
		return (3);
	}
	for ( ;s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
			return(0);
		}
		else if (s1[i] < s2[i])
		{
			return (-15);
		}
		else
			return (15);
	}
	return(0);
}
