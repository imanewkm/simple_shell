#include "shell.h"
#define true 1
/**
 * main - main function
 * @argc: number of arguments
 * @argv: arguments
 * Return: Always 0 (success)
 */
int main(int __attribute__((__unused__)) argc, char **argv)
{
	char *input = NULL;
	char **command = NULL;
	(void) argv;

	while (true)
	{
		input = read_input();
		if (!input) /* Handle end of file using ctrl + D */
		{
			if (isatty(STDIN_FILENO)) /* interractive mode only */
			{
				write(STDOUT_FILENO, "\n", 1); /* adds a new line after reaching EOF */
			}
			return (0);
		}
		command = segment_input(input);
		if (!command)
		{
			continue;
		}
		free_array(command);
	}
}
