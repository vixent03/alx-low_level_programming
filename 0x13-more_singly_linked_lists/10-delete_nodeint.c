#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list.
 * @head: head of a list.
 * @index: index of the list where the node is deleted.
 *
 * Return: 1 if success, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prevlist;
	listint_t *temp;

	prevlist = *head;
	if (index != 0)
	{
		for (i = 0; i < index - 1 && prevlist != NULL; i++)
		{
			prevlist = prevlist->next;
		}
	}
	if (prevlist == NULL || (prevlist->next == NULL && index != 0))
	{
		return (-1);
	}
	temp = prevlist->next;
	if (index != 0)
	{
		prevlist->next = temp->next;
		free(temp);
	}
	else
	{
		free(prevlist);
		*head = temp;
	}
	return (1);
}
