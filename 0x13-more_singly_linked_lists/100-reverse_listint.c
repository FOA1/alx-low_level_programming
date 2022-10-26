#include "lists.h"
/**
 * reverse_listint - reversed a linked list
 *
 * @head: head of the list to reverse
 * Return: head of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prenode, *curnode, *nextnode;

	prenode = 0;
	curnode = nextnode = *head;
	while (nextnode != NULL)
	{
		nextnode = nextnode->next;
		curnode->next = prenode;
		prenode = curnode;
		curnode = nextnode;
	}
	*head = prenode;
	return (*head);
}
