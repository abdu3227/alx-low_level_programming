#include <unistd.h>
#include "main.h"

/**
 * _putchar - print char to stdout
 * @ch: char to print
 * Return: output
 */
int _putchar(char ch)
{
	static int con;
	static char buffer[1024];

	if (ch == -1)
	{
		con = 0;
		return (0);
	}
	if (ch == -2 || con == 1024)
	{
		write(1, buffer, con);
		con = 0;
	}
	if (ch != -1 && ch != -2)
	{
		buffer[con] = ch;
		con++;
		return (1);
	}
	return (0);
}
