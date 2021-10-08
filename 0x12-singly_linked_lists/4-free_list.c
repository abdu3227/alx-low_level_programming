#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: head of the list
 */

void free_list(list_t *head)
{
	list_t *cur = head;
	list_t *next;

	while (cur)
	{
		next = cur->next;
		free(cur->str);
		free(cur);
		cur = next;
	}
	head = NULL;
}
