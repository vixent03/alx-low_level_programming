#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	int headnode;
	listint_t *hlist;
	listint_t *currlist;

	if (*head == NULL)
		return (0);
	currlist = *head;
	headnode = currlist->n;
	hlist = currlist->next;
	free(currlist);
	*head = hlist;
	return (headnode);
}
