#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of the list to be freed
 *
 * Return: none
 */
void free_listint2(listint_t **head)
{
	listint_t *templist;
	listint_t *currlist;

	if (head != NULL)
	{
		currlist = *head;
		while ((templist = currlist) != NULL)
		{
			currlist = currlist->next;
			free(templist);
		}
		*head = NULL;
	}
}
