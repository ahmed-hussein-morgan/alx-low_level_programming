#include "main.h"
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("%c\n", '0');
		return (1);
	}
	for (i = 0; i < argc; i++)
	{
		if (atoi(argv[i]) < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%i\n", sum);
	return (0);
}
