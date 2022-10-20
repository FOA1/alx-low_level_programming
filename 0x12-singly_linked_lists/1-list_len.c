#include "lists.h"
/**
 * list_len - counts the number of elements in a linked list
 * @h: the head of the list
 *
 * Return: the number of elements in the list
 */
size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *temp;

	temp = h;

	while (temp != 0)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
