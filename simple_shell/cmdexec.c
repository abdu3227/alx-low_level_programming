#include "shell.h"
/**
 * cmdexec - Execute command
 * @param : command parsed
 * @env: Enviroment
 * Return: 0 succed, 1 not found, 2 permision denied
 */

int  cmdexec(char **param, char **env)
{
	int ex;
	int ResultPath;
	int i = 0;

	ResultPath = mpth(param, env);


	if (!ResultPath)
	{


		for (i = 0; param[i] != NULL; i++)
		{
			rmspaces(param[i]);
		}
		if (_strcmp(param[i - 1], "") == 0)
			param[i - 1] = NULL;

		ex = execve(param[0], param, env);

		if (ex == -1)
		{
			return (2);
		}
	}
	else
	{
		return (1);
	}
	return (0);
}

