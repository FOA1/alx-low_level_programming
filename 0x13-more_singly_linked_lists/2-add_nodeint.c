#include "lists.h"
/**
 * add_nodeint - adds node at the beginning of a linked list
 *
 * @head: the head of the list
 * @n: the number to initialize the head with
 *
 * Return: a pointerto the head of the new list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);



}
