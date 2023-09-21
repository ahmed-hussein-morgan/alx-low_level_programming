#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: conc str
 * @src: appended str
 * @n: number of needed bytes
 * Return: concatenated str
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (;j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
