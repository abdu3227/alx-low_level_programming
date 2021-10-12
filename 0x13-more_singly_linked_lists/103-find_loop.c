#include "lists.h"

/**
 * find_listint_loop - finds the loop in linked list
 * @head: pointer to the head of list
 *
 * Return: address of where loop started or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *list1, *list2;

	list1 = list2 = head;
	while (list1 && list2 && list2->next)
	{
		list1 = list1->next;
		list2 = list2->next->next;
		if (list1 == list2)
		{
			list1 = head;
			break;
		}
	}
	if (!list1 || !list2 || !list2->next)
		return (NULL);
	while (list1 != list2)
	{
		list1 = list1->next;
		list2 = list2->next;
	}
	return (list2);
}
