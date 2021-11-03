#include "shell.h"
/**
 * _prompt- print the prompt of shell
 *
 */
void _prompt(void)
{
	char cwd[1024];

	getcwd(cwd, sizeof(cwd));
	printf("\nDir: %s\n$>>> ", cwd);
}
