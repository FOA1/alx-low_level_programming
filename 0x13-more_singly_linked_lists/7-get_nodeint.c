#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 *
 * @head: the head node
 * @index: the index of the element to return
 *
 * Return: a pointer to the node of the given index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int len = 0, i;

	temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		len++;
	}

	if (len < index)
		return (NULL);

	temp = head;
	for (i = 0; i < index; i++)
		temp = temp->next;

	return (temp);
}
