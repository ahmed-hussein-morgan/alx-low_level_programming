#include "main.h"

/**
 * print_number - returns the largest of 3 numbers
 * @n: integer
 * Return: largest number
*/

void print_number(int n)
{
	int divisor = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n / divisor >= 10)
	{
		divisor *= 10;
	}
	while (divisor != 0)
	{
		_putchar((n / divisor) % 10 + '0');
		divisor /= 10;
	}
}
