#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head of list
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	if (!head)
		return;
	while (head)
	{
		t = head;
		head = head->next;
		free(t);
	}
	head = NULL;
}
