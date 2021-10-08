#include "lists.h"

/**
 * list_len - return the numbers of element in linked list
 * @h: head of linked list
 * Return: num of element in list_t
 */
size_t list_len(const list_t *h)
{
	register unsigned int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
