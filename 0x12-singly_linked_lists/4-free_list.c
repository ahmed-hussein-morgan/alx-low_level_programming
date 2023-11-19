#include "lists.h"

/**
 * free_list - free the linked list
 * @head: the head pointer of the list
 * Return: No return but free all nodes
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
