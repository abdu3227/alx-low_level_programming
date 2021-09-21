#include <stdlib.h>
#include "main.h"

/**
 * _strdup - return pointer to newly allocated mem space, which
 * contain copy of string.
 * @str: string to be passed
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);
	i = len = 0;
	while (str[len] != '\0')
		len++;
	len++;
	s = malloc(sizeof(*str) * len);
	if (s == NULL)
		return (NULL);
	while (i <= len)
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}
