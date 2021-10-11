#include "lists.h"

/**
 * add_nodeint_end - add new node to the end of list
 * @head: double pointer to head of list
 * @n: integer
 * Return: address of nw node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));
	listint_t *cur;

	if (!head || !newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (!*head)
		*head = newnode;
	else
	{
		cur = *head;
		while (cur->next)
			cur = cur->next;
		cur->next = newnode;
	}
	return (newnode);
}
