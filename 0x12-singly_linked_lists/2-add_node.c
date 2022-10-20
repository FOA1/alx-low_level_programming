#include "lists.h"

/**
 * add_node - adds a node to the beginning of a list
 * @head: the head of the list
 * @str: the string to be copied into the elements
 *
 * Return: the address of the newly created list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		printf("Error\n");

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (*head);
}
