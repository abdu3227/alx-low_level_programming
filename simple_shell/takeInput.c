#include "shell.h"

/**
 * takeInput - Function to take Input
 * @str: takes input
 *
 * Return: 0 or 1
 */

int takeInput(char *str)
{
	char *buf;

	buf = read_line();
	if (_strlen(buf) != 0)
	{
		add_history(buf);
		_strcpy(str, buf);
		return (0);
	}
	else
	{
		return (1);
	}
}
