#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @i: is an int
 * Return: the positive number
*/
int _abs(int i)
{
	if (i < 0)
	{
		i *= -1;
	}
	return (i);
}
