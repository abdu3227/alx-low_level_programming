#include "shell.h"
/**
 * printEnv - print enviroment var
 * @env: array enviroment var
 * Authors - Carlos Garcia - Ivan Dario Lasso - Cohort 10 - Cali
 **/
void printEnv(char **env)
{
	char **isEnv;


	for (isEnv = env; *env != NULL; env++)
	{
		*isEnv = *env;
		_puts(*isEnv);
	}
}

