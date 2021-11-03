#include "shell.h"
/**
 * Dash_exit - exits the shell
 * @command:  line of command
 * @status:  status process
 * Return: 2 EXIT DONE, 0 NOT EXIT
 */

int Dash_exit(char *command, int status)
{
	char *comm;
	char **ExitStatus;
	int exitcode;

	comm = _strdup(command);
	rmspaces(comm);

	if (_strlen(comm) > 1)
	{
		if (_strncmp(comm, "exit", 4) == 0)
		{
			ExitStatus = Parscmd(command, " ");
			if (ExitStatus[1] == NULL)
			{
				exitcode = status;
				free(command);
				free(ExitStatus);
				free(comm);
				exit(exitcode);
			}
			rmspaces(ExitStatus[1]);
			exitcode = _atoi(ExitStatus[1]);
			free(command);
			free(ExitStatus);
			free(comm);
			exit(exitcode);
			return (2); /*exit(0);*/
		}
	}
	free(comm);
return (0);
}

