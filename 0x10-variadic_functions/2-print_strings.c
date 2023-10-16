#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: the string printed between the strings
 * @n: number of strings passed to the function
 * Return: NO return value
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list arglist;
	char *str;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(arglist, n);

        while (i < n)
        {
		str = va_arg(arglist, char *);
		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
                if (separator != NULL && i != (n - 1))
                {
                        printf("%s", separator);
                }
                i++;
        }
        printf("\n");

        va_end(arglist);
}
