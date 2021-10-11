#include "lists.h"

/**
 * add_nodeint - add new node to the beginning of list
 * @head: double pointer ot head of list
 * @n: integer
 * Return: pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nwNode = malloc(sizeof(listint_t));

	if (!head || !nwNode)
		return (NULL);
	nwNode->n = n;
	nwNode->next = NULL;
	if (*head)
		nwNode->next = *head;
	*head = nwNode;
	return (nwNode);
}
