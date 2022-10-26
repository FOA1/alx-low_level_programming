#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 *
 * @head: the head node
 * @idx: the position to add the new node
 * @n: the input data for the node
 *
 * Return: a pointer to the node of the given index
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *newnode;
	unsigned int len = 0, i;

	if (*head == NULL)
	{
		newnode = malloc(sizeof(listint_t));
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	temp = *head;
	while (temp != NULL)
	{
		temp = temp->next;
		len++;
	}
	if (idx > len)
		return (NULL);
	temp = *head;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else if (idx == len)
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
	}
	else
	{
		for (i = 0; i < (idx - 1); i++)
			temp = temp->next;
		newnode->next = temp->next;
		temp->next = newnode;
	}
	return (newnode);
}
