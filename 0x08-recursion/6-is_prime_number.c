#include "main.h"
#include <math.h>

/**
 * check_divisibility - check if the number n is divisible by any number up to i
 * @n: the number
 * @i: the current divisor
 * Return: 0 if n is divisible by any number up to i, 1 otherwise
*/
int check_divisibility(int n, int i)
{
    if (i > sqrt(n))
    {
        return 1;
    }
    else if (n % i == 0 || n % (i + 2) == 0)
    {
        return 0;
    }
    else
    {
        return check_divisibility(n, i + 6);
    }
}

/**
 * is_prime_number - check if the number is prime
 * @n: the number
 * Return: the check result
*/
int is_prime_number(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    else if (n <= 3)
    {
        return 1;
    }
    else if (n % 2 == 0 || n % 3 == 0)
    {
        return 0;
    }
    else
    {
        return check_divisibility(n, 5);
    }
}
