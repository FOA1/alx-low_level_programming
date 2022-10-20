#include "lists.h"
/**
 * add_node_end - adds a node to the end of a list
 * @head: the head of the list
 * @str: the string to be copied into the elements
 *
 * Return: the address of the newly created list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		temp = *head;

		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (new);
}
