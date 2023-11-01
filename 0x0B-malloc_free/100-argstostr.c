#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: is an integer
 * @av: a character
 * Return: 0 successful
*/

char *argstostr(int ac, char **av)
{
	size_t total_len = 0;
	int i = 0;
	char *new_str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	while (i < ac)
	{
		total_len += strlen(av[i]) + 1; /* Add 1 for the newline character*/
		i++;
	}

	new_str = malloc((total_len + 1) * sizeof(char));
	if (new_str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < ac)
	{
		strcpy(new_str + strlen(new_str), av[i]);
		strcat(new_str, "\n");
		i++;
	}

	return (new_str);
}
