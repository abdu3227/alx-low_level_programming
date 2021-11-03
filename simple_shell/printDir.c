#include "shell.h"

/**
 * printDir - prints the directory
 *
 * Return: nothing
 */

void printDir(void)
{
	char cwd[1024];

	getcwd(cwd, sizeof(cwd));
	printf("\nDir: %s\n>>> ", cwd);
}
