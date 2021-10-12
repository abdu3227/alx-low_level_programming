#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of list
 * @head: head pointer of list
 * @index: the nth node index
 * Return: the node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *cur;

	register uint c = 0;

	cur = head;
	while (cur)
	{
		if (c == index)
			return (cur);
		c++;
		cur = cur->next;
	}
	return (cur);
}
