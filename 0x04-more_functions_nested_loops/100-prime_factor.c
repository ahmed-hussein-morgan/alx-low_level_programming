#include <stdio.h>
#include <math.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	long int num = 612852475143;
	int largest_prime_factor = 0;
	int i;

	while (num % 2 == 0)
	{
		largest_prime_factor = 2;
		num /= 2;
		}

	for (i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			largest_prime_factor = i;
			num /= i;
		}
	}

	if (num > 2)
	{
		largest_prime_factor = num;
	}

	printf("%d\n", largest_prime_factor);

	return (0);
}
