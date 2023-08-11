#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head of a list.
 * @idx: index of the list where the new node is added.
 * @n: integer element.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newlist;
	listint_t *headlist;

	headlist = *head;
	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && headlist != NULL; i++)
		{
			headlist = headlist->next;
		}
	}
	if (headlist == NULL && idx != 0)
		return (NULL);
	newlist = malloc(sizeof(listint_t));
	if (newlist == NULL)
		return (NULL);
	newlist->n = n;
	if (idx == 0)
	{
		newlist->next = *head;
		*head = newlist;
	}
	else
	{
		newlist->next = headlist->next;
		headlist->next = newlist;
	}
	return (newlist);
}
