#include <unistd.h>

/**
 * _putchar - writes the character to stdout
 * @c: character c
 *
 * Return: on success 1 or -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
