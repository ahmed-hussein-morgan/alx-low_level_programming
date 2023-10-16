#include "variadic_functions.h"

/**
 * print_numbers - print the fnc arguments
 * @separator: is the sperator between numbers
 * @n: number of arguments
 * Return: NO return value
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list arglist;

	if (n == 0)
	{
		return;
	}
	va_start(arglist, n);

	while(i < (n-1))
	{
		/*confirm the below print %s and int arg*/
		printf("%i", va_arg(arglist, unsigned int));
		if(separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("%i\n", va_arg(arglist, unsigned int));


	va_end(arglist);
}
