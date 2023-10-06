#include "main.h"
/**
 * str_concat - function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: NULL on failure
 *	if NULL is passed, treat it as an empty string
 *	if Success - returned pointer should point to
 *		a newly allocated space in memory
 *		contains the conatenated string
 *		and null terminated
*/
char *str_concat(char *s1, char *s2)
{
	int i, j, len, c, x;
	char *new;

	if (s1 == NULL)
	{
	 for (j = 0; s2[j] != '\0'; j++)
        {
        }
        new = malloc((j + 1) * sizeof(char));
        if (!new)
        {
            return (NULL);
        }
        for (j = 0; s2[j] != '\0'; j++)
        {
            new[j] = s2[j];
        }
        new[j] = '\0';
        return (new);
	}
	if (s2 == NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
        {
        }
        new = malloc((i + 1) * sizeof(char));
        if (!new)
        {
            return (NULL);
        }
        for (i = 0; s1[i] != '\0'; i++)
        {
            new[i] = s1[i];
        }
        new[i] = '\0';
        return (new);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	if (s1 == NULL && s2 == NULL)
	{
		new = malloc(sizeof(char));
		if (!new)
		{
			return (NULL);
		}
		new[0] = '\0';
		return (new);
	}
	len = (i + j);
	new = malloc(len * sizeof(char) + 1);
	if (!new)
	{
		return (NULL);
	}
	x = 0;
	c = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{
		new[i] = s1[i];
		c++;
	}
	for (; c < len; c++)
	{
		new[c] = s2[x];
		x++;
	}
	new[len] = '\0';
	return (new);
	}
