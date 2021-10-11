#include "lists.h"

/**
 * free_listint2 - frees linked list listint_t
 * @head: double pointer to the head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *cur;
	listint_t *t;

	if (!head)
		return;
	cur = *head;
	while (cur)
	{
		t = cur;
		cur = t->next;
		free(t);
	}
	*head = NULL;
	head = NULL;
}
