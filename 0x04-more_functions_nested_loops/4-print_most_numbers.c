#include "main.h"
/**
 * print_most_numbers - returns the largest of 3 numbers
 * Return: void
*/
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		else
			_putchar(i);
	}
	_putchar('\n');
}
