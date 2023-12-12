#include "shell.h"
/**
 * execute_command - exe
 * @command: cmd
 * @argv: input
 * Return: Always 0
 */
int execute_command(char **command, char **argv)
{
	pid_t child_process;
	int result;

	child_process = fork();
	if (!child_process)
	{
		if (execve(command[0], command, environ) == -1)
		{
			perror(argv[0]);
			free_array(command);
			exit(127);
		}
	}
	else
	{
		waitpid(child_process, &result, 0);
		free_array(command);
	}
	return (WEXITSTATUS(result));
}
