#include "main.h"

/**
 * is_prime_number - check if the number is prime
 * @n: the number
 * @i: the current divisor being checked
 * Return: the check result
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
