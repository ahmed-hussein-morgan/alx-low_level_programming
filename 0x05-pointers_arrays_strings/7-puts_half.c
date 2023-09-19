#include "main.h"
#include <stdio.h>
/**
 * puts_half -  prints half of a string
 * @str: string
 * Return: half printed
*/
void puts_half(char *str)
{
	int len, i;

	for (len = 0; *str != '\0'; len++)
	{
		str++;
	}
	str = (str - len);
	if (len % 2 == 1)
	{
		len++;
	}
	for (i = 0; i < len && *str != '\0'; i++)
	{
		if (i < (len / 2))
		{
			str++;
		}
		else if (i >= (len / 2))
		{
			_putchar(*str);
			str++;
		}
	}
	_putchar('\n');
}
