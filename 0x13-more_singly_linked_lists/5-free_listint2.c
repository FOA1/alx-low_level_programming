#include "lists.h"
/**
 * free_listint - frees the memory used for linked lists
 * @head: the head of the list
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	while (*head != NULL)
	{
		free(*head);
		*head = (*head)->next;
	}

}
