#include "lists.h"

/**
 * pop_listint - deletes the head node of list and
 * returns the head node's data
 * @head: pointer to the head node
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *cur;
	int d;

	if (!(*head) || !head)
		return (0);
	cur = *head;
	d = cur->n;
	*head = (*head)->next;
	free(cur);
	return (d);
}
