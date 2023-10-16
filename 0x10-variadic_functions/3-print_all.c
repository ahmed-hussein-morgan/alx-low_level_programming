#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list arglist;
	char *str;
	char *seperator = "";

	va_start(arglist, format);
	if (format)
	{
	while (format[i])
	{
		/*switch (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's')*/
		switch(format[i])
		{
			case 'c':
				printf("%s%c", seperator, va_arg(arglist, int));
				break;
			case 'i':
				printf("%s%i", seperator, va_arg(arglist, int));
				break;
			case 'f':
				printf("%s%f", seperator, va_arg(arglist, double));
				break;
			case 's':
				str = va_arg(arglist, char *);
				if(!str)
				{
					str = "(nil)";
				}
				printf("%s%s", seperator, str);
				break;
			default:
				i++;
				continue;
		}
		seperator = ", ";
		i++;
	}
	}
	printf("\n");
	va_end(arglist);
}
