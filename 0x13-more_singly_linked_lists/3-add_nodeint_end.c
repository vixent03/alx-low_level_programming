#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newlist;
	listint_t *templist;

	(void)templist;
	newlist = malloc(sizeof(listint_t));
	if (newlist == NULL)
		return (NULL);
	newlist->n = n;
	newlist->next = NULL;
	templist = *head;
	if (*head == NULL)
	{
		*head = newlist;
	}
	else
	{
		while (templist->next != NULL)
		{
			templist = templist->next;
		}
		templist->next = newlist;
	}

	return (*head);
}
