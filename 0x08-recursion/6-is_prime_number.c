#include "main.h"
/**
 * is_prime_number - check if the number is prime
 * @n: the number
 * Return: the check result
*/
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 3)
	{
		return (1);
	}
	if (i == n || n % i == 0)
	{
		return (0);
	}
	else if (n % i != 0)
	{
		i++;
		is_prime_number(n);
	}
/* You have to create a new supported function to check the prime*/
	return (1);
}
