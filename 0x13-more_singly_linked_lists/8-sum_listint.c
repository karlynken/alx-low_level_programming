#include "lists.h"

/**
 * sum_listint - calculates the sum of all the all the data (n) of a linked list
 * @head: pointer to the head of list
 * Return: sum of all data (n),
 *	   or 0 - if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
