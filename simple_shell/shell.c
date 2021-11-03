#include "shell.h"

/**
 * main - shell init program
 * @argc: Number of Arguments
 * @argv: Array of arguments
 * @env:  Array enviroment
 * Return: Return 0
 */
int main(int argc, char *argv[], char **env)
{
	init_shell();

	if (argc == 1)
	{
		Dash_execute(env, argv);
	}
	else
	{
		if (cmdexec(++argv, env))
			exit(127);
	}

	return (0);
}

