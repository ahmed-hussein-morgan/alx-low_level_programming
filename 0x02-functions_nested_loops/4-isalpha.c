#include "main.h"
/**
 * _isalpha - returns the alpha check
 * @c: the char
 * Return: 1 in case of char
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
		return (0);
}
