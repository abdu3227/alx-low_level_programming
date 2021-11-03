#include "shell.h"

/**
 * main - Entery point of the shell
 *
 * Return: Always 0
 */

int main(void)
{
	char inputString[MAXCOM], **parsedArgs;
	int status = 1;
	
	init_shell();
	while (status)
	{
		/* print current directory */
		printDir();
		/* take input */
		if (takeInput(inputString))
			continue;
		/* process */
		parsedArgs = split_line(inputString);
		/* execute */
		status = dash_execute(parsedArgs);
		free(parsedArgs);
	}
	return (0);
}
