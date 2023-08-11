#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevlist;
	listint_t *nextlist;

	prevlist = NULL;
	nextlist = NULL;
	while (*head != NULL)
	{
		nextlist = (*head)->next;
		(*head)->next = prevlist;
		prevlist = *head;
		*head = nextlist;
	}

	*head = prevlist;
	return (*head);
}
