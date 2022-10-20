#include "lists.h"
/**
 * print_list - prints a singly linked list
 * @h - the head of the list
 *
 * Return: the number of elements in the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *temp;

	temp = h;

	while (temp != 0)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		count++;
	}
	return (count);
}
