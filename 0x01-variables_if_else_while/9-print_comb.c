#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 57)
		{
			putchar(i);
		}
		else
		{
			putchar(i);
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
