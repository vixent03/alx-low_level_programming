#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 *
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *prevlist2;
	listint_t *prevlist;

	prevlist2 = head;
	prevlist = head;
	while (head && prevlist2 && prevlist2->next)
	{
		head = head->next;
		prevlist2 = prevlist2->next->next;
		if (head == prevlist2)
		{
			head = prevlist;
			prevlist =  prevlist2;
			while (1)
			{
				prevlist2 = prevlist;
				while (prevlist2->next != head && prevlist2->next != prevlist)
				{
					prevlist2 = prevlist2->next;
				}
				if (prevlist2->next == head)
					break;
				head = head->next;
			}
			return (prevlist2->next);
		}
	}
	return (NULL);
}
