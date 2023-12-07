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

	write(STDOUT_FILENO, "$$ ", 3);
	i = getline(&input, &length, stdin);
	if (i == -1)
	{
		free(input);
		return (0);
	}
	return (input);
}
