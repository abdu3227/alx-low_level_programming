#include "lists.h"

/**
 * listint_len - return num of elements in  a list
 * @h: head pointer of list
 * Return: num of elements
 */
size_t listint_len(const listint_t *h)
{
	register size_t c = 0;

	while (h)
	{
		h = h->next;
		c++;
	}
	return (c);
}
