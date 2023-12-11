#include "shell.h"
/**
 * segment_input - analyzes input
 * @input: command
 * Return: Always 0 (success)
 */
char **segment_input(char *input)
{
	char *str = NULL, *temp = NULL;
	char **command;
	int i, count = 0;

	if (!input)
	{
		return (0);
	}
	temp = _strdup(input);
	str = strtok(temp, DELIMITER);
	if (!str)
	{
		free_pointer(input);
		free_pointer(temp);
		return (0);
	}
	while (str)
	{
		count++;
		str = strtok(NULL, DELIMITER);
	}
	free_pointer(temp);
	command = malloc(sizeof(char *) * (count + 1));
	if (!command)
	{
		free_pointer(input);
		return (0);
	}
	str = strtok(input, DELIMITER);
	for (i = 0; str; i++)
	{
		command[i] = _strdup(str);
		str = strtok(NULL, DELIMITER);
	}
	free_pointer(input);
	command[i] = NULL;
	return (command);
}
