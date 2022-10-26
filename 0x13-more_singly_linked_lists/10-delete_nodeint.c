#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at a given index
 *
 * @head: the head of the node
 * @index: the position of the node to delete
 *
 * Return: 1 for success or -1 for fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0, len;
	listint_t *temp, *temp2;

	if (*head == NULL)
		return (-1);
	temp = *head;
	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}
	if (index >= len)
		return (-1);
	temp = *head;
	if (index == 0)
		*head = (*head)->next;
	else if (index == (len - 1))
	{
		while (temp->next != NULL)
		{
			temp2 = temp;
			temp = temp->next;
		}
		temp2->next = NULL;
	}
	else
	{
		for (i = 0; i < index; i++)
		{
			temp2 = temp;
			temp = temp->next;
		}
		temp2->next = temp->next;
		temp->next = NULL;
	}
	free(temp);
	return (1);
}
