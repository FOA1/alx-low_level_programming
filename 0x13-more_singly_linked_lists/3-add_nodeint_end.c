#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of a lined list
 *
 * @head: the head of the node
 * @n: the item to be copied
 *
 * Return: pointer to the new node created
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	temp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
