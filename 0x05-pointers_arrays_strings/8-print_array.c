#include "main.h"
#include <stdio.h>
/**
 * print_array -  prints n elements of an array of integers
 * @a: array of int
 * @n: number of elements
 * Return: printed elements
*/
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("%d\n", a[0]);
		return;
	}
	else
		for (i = 0; i < n; i++)
		{
			if (i == (n - 1))
			{
				printf("%d\n", a[i]);
			}
			else
				printf("%d, ", a[i]);
	}
}