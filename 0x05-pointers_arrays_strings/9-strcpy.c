#include "main.h"
/**
 * _strcpy -  copies the string to the buffer
 * @src: the source str
 * @dest: the buffer
 * Return: copied str
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	for(; *src != '\0'; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*(dest + i) = '\0';
	return(dest);
}
