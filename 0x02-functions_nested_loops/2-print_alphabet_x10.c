#include "main.h"
/**
 * print_alphabet_x10 - print_alphabet 10 times
 *
 * Return: alphabet
*/
void print_alphabet_x10(void)
{
	int i, n;

	for (n = 0; n < 10; n++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
	}
}
