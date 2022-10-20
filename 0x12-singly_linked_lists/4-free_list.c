#include "lists.h"
/**
 * free_list - frees the memory used for linked lists
 * @head: the head of the list
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
