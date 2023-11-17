#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @*h: a pointer to the head of list_t
 * Return: the number of nodes (in sucess)
 * 	If str is NULL, print [0] (nil)
 * 	You are allowed to use printf
*/

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = h;

	if (ptr == NULL)
	{
		return(0);
	}

	while(ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
			/*return(0);*/
			ptr = ptr->next;
		}
		else
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
			ptr = ptr->next;
		}
		count++;
	}
	return(count);
}
