#include "main.h"
#include <stdlib.h>
/**
 * main - multiplies two number of arguments
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	/*int i;*/

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		/*printf("%i\n", ((int) argv[2] * (int) argv[3]));*/
		printf("%i\n", ( atoi(argv[1]) * atoi(argv[2])));
	}
	return (0);
}
