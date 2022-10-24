#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list,
 *			and returns the head node’s data (n).
 * @head: the head of the list
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int x;

	if (*head == NULL)
		return (0);

	x = (*head)->n;

	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (x);

}
