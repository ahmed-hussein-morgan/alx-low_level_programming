#include "lists.h"

/**
 * listint_len - returns the number of elements
 * @h: linked list to traverse
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}

	return (x);
}
