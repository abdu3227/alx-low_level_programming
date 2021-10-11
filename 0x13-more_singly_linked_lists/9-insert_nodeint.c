#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at given position
 * @head: double pointer to the first node
 * @idx: index of the node to insert
 * @n: value for new node
 *
 * Return: pointer to the indexed node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *cur, *newnode;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		cur = *head;
		for (i = 0; i < idx - 1 && cur != NULL; i++)
		{
			cur = cur->next;
		}
		if (cur == NULL)
			return (NULL);
	}
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	newnode->next = cur->next;
	cur->next = newnode;
	return (newnode);
}
