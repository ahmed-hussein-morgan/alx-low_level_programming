#include <stdio.h>
#include <stdlib.h>

/**
 * check_arg - check if the arg is digit
 * @arg: the string we check
 * Return: 0 if it is not an int
 *			1 if it is an int
*/
int check_arg(char *arg)
{
	int j = 0;

	for (; arg[j] != '\0';)
	{
		if (arg[j] < '0' || arg[j] > '9')
		{
			return (0);
		}
		else
		{
			j++;
		}
	}
	return (1);
}
/**
 * main - Entry point
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int i = 1;
	/*char *s;*/
	int sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	while (i < argc)
	{
		if (!check_arg(argv[i]))
		{
			printf("Error \n");
			return (1);
		}
		sum += atoi(argv[i]);

		i++;
	}
	printf("%d\n", sum);

	return (0);
}
