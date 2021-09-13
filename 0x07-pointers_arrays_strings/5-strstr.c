#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: loca
 */
char *_strstr(char *haystack, char *needle)
{
	char *hay;
	char *need;

	while (*haystack)
	{
		hay = haystack;
		need = needle;
		while (*need && *haystack && *haystack == *need)
		{
			haystack++;
			need++;
		}
		if (!*need)
		{
			return (hay);
		}
		haystack = hay + 1;
	}
	return (0);
}
