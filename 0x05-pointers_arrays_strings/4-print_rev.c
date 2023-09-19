#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * @s: string
 * Return: string in reverse
*/
void print_rev(char *s)
{
	int i = 0;

	for (; *s != '\0'; i++)
	{
		s++;
	}
	s--;
	for (; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
