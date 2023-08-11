#include "lists.h"

/**
 * sum_listint - returns the sum of all the data in a list
 * @head: head of the list.
 * Return: sum of all the (n).
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
