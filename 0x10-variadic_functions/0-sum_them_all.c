#include "variadic_functions.h"



int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	unsigned int sum = 0;
	va_list arglist;

	if (n == 0)
	{
		return (0);
	}
	/*va_list arglist;*/

	va_start(arglist, n);

	while (i < n)
	{
	sum += va_arg(arglist, int);
	i++;
	}
	va_end(arglist);

	return (sum);

}
