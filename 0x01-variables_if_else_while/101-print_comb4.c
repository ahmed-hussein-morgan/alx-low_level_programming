#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i, j, k;

	for (i = 48; i < 56;)
	{
		j = i + 1;
		for (; j < 57; j++)
		{
			k = j + 1;
			for (; k <= 57; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != 55)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
