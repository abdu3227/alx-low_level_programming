#include "shell.h"

/**
 * Dash_execute - startes and loops
 * @env:   enviroment
 * @argv:  arguments
 */
void Dash_execute(char **env, char **argv)
{
	size_t sizebuf;
	char *command = NULL;
	pid_t pid;
	int indBuilt = 0;
	static int status;
	static int Qexecutes = 1;
	ssize_t QcharComm;

	command = NULL;
	_prompt();
	while ((QcharComm = getline(&command, &sizebuf, stdin)) != EOF)
	{
		if (_strcmp(command, "\n") != 0)
		{
			indBuilt = Builtin(command, env, status);
			if (indBuilt == CHANGE_DIR)
			{	free(command);
				command = NULL;
				continue;
			};
			if (indBuilt == EXIT_SHELL)
			{	free(command);
				exit(0);
			}
			pid = fork();
			if (pid > 0)
			{
				status = _Wait(argv, command, Qexecutes);
				Qexecutes++;
			}
			else if (pid == 0)
				{
				execute(command, env);
				}
			if (pid == -1)
				perror("Error fork");
		}
		else
		{	free(command);
			command = NULL;
		}
		_prompt();
	}
	free(command);
	if (status != 0)
		exit(status);
}
/**
 * execute - execute command whith enviroment
 * @command: take a command
 * @env: enviroment
 * Return: void
 */
void execute(char *command, char **env)
{
	char **param;
	int indEx = 0;
	char *comm;

	comm = strdup(command);
	rmspaces(comm);
	if (_strlen(comm) == 1)
	{
		free(comm);
		_exit(0);
	}
	free(comm);

	param = Parscmd(command, " ");
	if (param != NULL)
	{
		if (_strcmp(param[0], "env") == 0)
		{
			printEnv(env);
			/*free(param); VALGRIND*/
		} else
		{
			indEx = cmdexec(param, env);
			if (indEx == 1)
			{
				free(command);
				free(param);
				_exit(127);
			}
			else if (indEx == 2)
			{
				free(command);
				free(param);
				_exit(126);
			}
		}
		free(command);
	}
	free(param);
	_exit(0);
}
/**
 *  _Wait - Wait for de child process and eval status
 * @argv: line command args to print name exe shell
 * @command: command to execute
 * @Qex: Executions Quantity
 * Return: return status process
 */
int _Wait(char **argv, char *command, int Qex)
{
	int status;
	char **Parsedcmd;

	wait(&status);
	if (WIFEXITED(status))
	{
		Parsedcmd = Parscmd(command, " ");
		if (WEXITSTATUS(status) == 126)
			errors(argv[0], Parsedcmd[0], PERM_DENIED, Qex);

		if (WEXITSTATUS(status) == 127)
			errors(argv[0], Parsedcmd[0], NOT_FOUND, Qex);
		if (WEXITSTATUS(status) != 127 &&
		    WEXITSTATUS(status) != 126 &&
		    WEXITSTATUS(status) != 2 &&
		    WEXITSTATUS(status) != 0)
			perror("");
		free(Parsedcmd);
	}
	return (WEXITSTATUS(status));
}
