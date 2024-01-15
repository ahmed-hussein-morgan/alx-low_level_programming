#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in list
 * @head: first node in the linked list
 * Return: resulting sum
 */

int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *temp = head;

	while (temp)
	{
		s += temp->n;
		temp = temp->next;
	}

	return (s);
}