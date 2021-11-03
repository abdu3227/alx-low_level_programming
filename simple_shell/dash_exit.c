#include "shell.h"
/**
 * dash_exit - Evaluate Exit Buitin
 * @command:  line of command
 * @status:  status process
 * Authors - Carlos Garcia - Ivan Dario Lasso - Cohort 10 - Cali
 * Return: 2 EXIT DONE, 0 NOT EXIT
 **/

int dash_exit(char **command, int status)
{
	char *comm;
	char **ExitStatus;
	int exitcode;

	comm = _strdup(*command);
	split_line(comm);

	if (_strlen(comm) > 1)
	{
		if (_strncmp(comm, "exit", 4) == 0)
		{
			ExitStatus = split_line(*command);
			if (ExitStatus[1] == NULL)
			{
				exitcode = status;
				free(command);
				free(ExitStatus);
				free(comm);
				exit(exitcode);
			}
			split_line((char *)ExitStatus[1]);
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

