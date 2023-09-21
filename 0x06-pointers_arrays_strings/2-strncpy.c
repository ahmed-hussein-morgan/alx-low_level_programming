#include"main.h"
/**
 * _strncpy - copies a string
 * @dest: copied str
 * @src: str
 * @n: number of char
 * Return: copied str
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && src[i] != '\0';)
	{
		dest[i] = src[i];
		i++;
	}
	for ( ; i < n; i++)

	dest[i] = '\0';
	return (dest);
}
