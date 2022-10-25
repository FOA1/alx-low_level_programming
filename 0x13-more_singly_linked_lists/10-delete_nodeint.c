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
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp2;
	unsigned int len = 0, i;

	if (*head == NULL)
		return (-1);
	temp = *head;
	while (temp != NULL)
	{
		temp = temp->next;
		len++;
	}
	if (idx >= len)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
	}
	else if (idx == (len - 1))
	{
		while (temp->next != NULL)
			temp = temp->next;
		free(temp);
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
