#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string, followed by a new line
 * @str: the string
 * Return: printed str
*/
void _puts(char *str)
{
	int i = 0;

	for (; *str != '\0'; i++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
