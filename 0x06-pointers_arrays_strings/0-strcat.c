#include "main.h"

/**
 * *_strcat - appends the src string to dest
 * @src: string1
 * @dest: string2
 * Return: dest
 */
void *_strcat(char *dest, char *src)
{
	int l1 = 0;
	int l2 = 0;

	while (*(dest + l1) != '\0')
	{
		l1++;
	}
	while (*(src + l2) != '\0')
	{
		*(dest + l1) = *(src + l2);
		l1++;
		l2++;
	}
	*(dest + l1) = '\0';
	return (dest);
}
