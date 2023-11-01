#include <stdlib.h>
#include <string.h>

/**
 * strtow - splits a string into words
 * @str: the string
 * Return: 0 successful
*/


char **strtow(char *str)
{
	char **words;
	int i, j, k, len, word_count = 0;

	if (str == NULL || *str == '\0')
	{
        return (NULL);
	}
	len = strlen(str);
	words = malloc((len + 1) * sizeof(char *));
	if (words == NULL)
	{
        return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
		{
			j = i;
			while (str[j] != ' ' && str[j] != '\0')
			{
                j++;
			}
            words[word_count] = malloc((j - i + 1) * sizeof(char));
            if (words[word_count] == NULL) {
                for (k = 0; k < word_count; k++)
                    free(words[k]);
                free(words);
                return NULL;
            }
            strncpy(words[word_count], str + i, j - i);
            words[word_count][j - i] = '\0';
            i = j;
            word_count++;
        }
    }

    words[word_count] = NULL;

    return words;
}
