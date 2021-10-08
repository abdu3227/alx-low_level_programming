#include "lists.h"

/**
 * _str_len - prints length of string
 * @str: string
 * Return: length of str
 */
int _str_len(char *str)
{
	char *pr = str;

	while (*str)
	{
		str++;
	}
	return (str - pr);
}

/**
 * add_node_end - add new node at the end of list
 * @head: pointer to head of the list
 * @str: string
 * Return: adress of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nwNode;
	list_t *last = *head;
	char *nwstr;

	if (!str)
		return (NULL);
	nwNode = malloc(sizeof(list_t));
	if (!nwNode)
		return (NULL);
	nwstr = strdup(str);
	if (!nwstr)
	{
		free(nwNode);
		return (NULL);
	}
	nwNode->len = _str_len(nwstr);
	nwNode->str = nwstr;
	nwNode->next = NULL;
	if (!*head)
	{
		*head = nwNode;
		return (nwNode);
	}
	while (last->next)
		last = last->next;
	last->next = nwNode;
	return (last);
}


