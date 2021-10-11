#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: head pointer
 * @index: index of the node
 * Return: pointer to the index
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *cur, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	cur = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (cur->next == NULL)
			return (-1);
		cur = cur->next;
	}
	next = cur->next;
	cur->next = next->next;
	free(next);
	return (1);
}
