#include "main.h"
/**
 * _islower - check the char
 * @c: the char
 * Return: 1 in case of c is lower
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
