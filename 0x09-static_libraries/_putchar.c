#include <unistd.h>

/**
 * _putchar - write the charater
 * @c: the character to print
 * Return: on success 1
 * On error, -1 is return
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
