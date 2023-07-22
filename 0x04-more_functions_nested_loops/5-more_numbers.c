#include "main.h"
/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
*/
void more_numbers(void)
{
	int i, j, k;

	i = '0';
	j = '0';
	k = 0;

	while(k < 10)
	{
		i = '0';
		for (; i <= '9'; i++)
		{
			_putchar(i);
		}
		i = '1';
		for (; j <= '4'; j++)
		{
			_putchar(i);
			_putchar(j);
		}
		_putchar('\n');
		k++;
	}
}
