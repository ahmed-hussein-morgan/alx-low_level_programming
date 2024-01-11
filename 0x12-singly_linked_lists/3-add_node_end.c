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
	/* Create the new node and update its data*/
	list_t *new = malloc(sizeof(list_t));

	if (!new)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	/*list_t *ptr = *head;*/
	/* Back to the linked list blow*/
	/* Check if the head pointer points to NULL*/
	/*		if so, uodate the head pointer to point to the new node*/
	/*			and return a pointer to the new node*/
	/*		if NOT, move the temp ptr to the next note till it reach NULL*/
	/* 			Then make the temp ptr points to the new node we created previously*/ 
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
