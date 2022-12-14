#include "lists.h"
/**
 * free_listint - frees the memory used for linked lists
 * @head: the head of the list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
