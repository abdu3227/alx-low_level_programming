#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenaties two string
 * @str1: string1
 * @str2: string2
 * Return: concat string
 */
char *str_concat(char *str1, char *str2)
{
	char *s, *e;
	int i, l1, l2, j;

	e = "";
	if (str1 == NULL)
		str1 = e;
	if (str2 == NULL)
		str2 = e;
	l1 = l2 = 0;
	while (str1[l1] != '\0')
	{
		l1++;
	}
	while (str2[l2] != '\0')
	{
		l2++;
	}
	l2++;
	s = malloc((l1 + l2) * sizeof(*str1));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < l1)
	{
		s[i] = str1[i];
		i++;
	}
	j = 0;
	while (j <= l2)
	{
		s[i] = str2[j];
		i++;
		j++;
	}
	return (s);
}
