#include "lists.h"

/**
 * _str_len - prints length of string
 * @s: input string
 * Return: length
 */
int _str_len(char *s)
{
	char *ptr = s;

	while (*s)
	{
		s++;
	}
	return (s - ptr);
}
/**
 * add_node - adds new node at the beginning of list_t
 * @head: point ot the head of list
 * @str: string to be added
 * Return: address new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	char *newstr;

	if (!str)
		return (NULL);
	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);
	newstr = strdup(str);
	if (!newstr)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = _str_len(newstr);
	newNode->str = newstr;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
