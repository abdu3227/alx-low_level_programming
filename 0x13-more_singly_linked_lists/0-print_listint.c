#include "lists.h"

/**
 * print_listint - prints all the elements of the list
 * @h: head pointer of the list
 * Return: num of elements
 */
size_t print_listint(const listint_t *h)
{
	register size_t c = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		c++;
	}
	return (c);
}
