#include "shell.h"
/**
 * printEnv - print enviroment var
 * @env: array enviroment var
 */

void printEnv(char **env)
{
	char **isEnv;


	for (isEnv = env; *env != NULL; env++)
	{
		*isEnv = *env;
		_puts(*isEnv);
	}
}

