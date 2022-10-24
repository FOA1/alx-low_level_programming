#include "lists.h"
/**
 * listint_len - counts the number of elements of a listint_t list.
 *
 * @h: the head of the list
 * Return: the number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
