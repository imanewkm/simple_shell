#include "shell.h"
/**
 * read_input - reads input
 * Return: Always 0 (success)
 */
char *read_input(void)
{
	char *input = NULL;
	size_t length = 0;
	ssize_t i;

	if (isatty(STDIN_FILENO)) /* interractive mode only */
	{
		write(STDOUT_FILENO, "$ ", 2);
	}
	i = getline(&input, &length, stdin);
	if (i == -1)
	{
		free(input);
		return (0);
	}
	return (input);
}
