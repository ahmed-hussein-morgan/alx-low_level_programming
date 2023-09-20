#include "main.h"
/**
 * _strcpy -  copies the string to the buffer
 * @src: the source str
 * @dest: the buffer
 * Return: copied str
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
