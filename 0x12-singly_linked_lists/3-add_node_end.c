#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: the head pointer of the list
 * @str: the string
 * Return: the address of the new element, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = *head;
	list_t *new = malloc(sizeof(list_t));

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	/*list_t *ptr = *head;*/

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}

	ptr->next = new;

	return (*head);
}
