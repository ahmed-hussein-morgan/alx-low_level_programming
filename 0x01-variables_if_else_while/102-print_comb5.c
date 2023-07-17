#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i, j, k, l;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		for (j = 48; i != 57 && j < 57; j++)
		{
			putchar(j);
			if (j > 57)
			{
				j = 48;
				i++;
			}
		}
	}
	putchar(' ');
	for (k = i; k <= '9'; k++)
	{
		putchar(k);
		if (k > 57)
		{
			k = 48;
			j++;
		}
		l = j + 1;
		for (; l <= 57; l++)
		{
			putchar(l);
			if (j != 56 && k != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
