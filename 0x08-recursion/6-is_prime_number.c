#include "main.h"

/**
 * is_prime_helper - analize the number in details
 * @n: the number
 * @i: the half of the intger
 * Return: the result of the number anlysis
 */

int is_prime_helper(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else
	{
		if (n % i == 0)
		{
			return (0);
		}
		else
		{
			return (is_prime_helper(n, i - 1));
		}
	}
}

/**
 * is_prime_number - confirm the prime number
 * @n: the number
 * Return: the check result
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, n / 2));
	}
}
