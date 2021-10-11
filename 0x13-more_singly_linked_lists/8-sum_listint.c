#include "lists.h"

/**
 * sum_listint - sums all of data of linked list
 * @head: head pointer of list
 * Return: sum of list
 */
int sum_listint(listint_t *head)
{
	listint_t *cur;
	register int sum = 0;

	if (!head)
		return (0);
	cur = head;
	while (cur)
	{
		sum += cur->n;
		cur = cur->next;
	}
	return (sum);
}
