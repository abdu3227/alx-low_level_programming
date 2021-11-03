#include "shell.h"

/**
 * dash_execute - executting the command
 * @args: the command to be executed
 *
 * Return: 1
 */
int dash_execute(char **args)
{
	id_t cpid;
	int status;
	int respath;
	char **env;

	if (_strcmp(args[0], "exit") == 0)
	{
		return (dash_exit(args, status));
	}
	else if (_strcmp(args[0], "Env"))
	{
		printEnv(env);
	}
	cpid = fork();
	if (cpid == 0)
	{
		if (execvp(args[0], args) < 0)
			printf("dash: command not found: %s\n", args[0]);
			exit(EXIT_FAILURE);
	}
	else if (cpid < 0)
		printf(RED "Error forking" RESET "\n");
	else
	{
		waitpid(cpid, &status, WUNTRACED);
	}
}
