#include "shell.h"
#define true 1
/**
 * main - main function
 * @argc: number of arguments
 * @argv: arguments
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	char *input = NULL;
	char **command = NULL;
	int result = 0;
	(void) argc;

	while (true)
	{
		input = read_input();
		if (!input) /* Handle end of file using ctrl + D */
		{
			if (isatty(STDIN_FILENO)) /* interractive mode only */
			{
				write(STDOUT_FILENO, "\n", 1); /* adds a new line after reaching EOF */
			}
			return (result);
		}
		command = segment_input(input);
		if (!command)
		{
			continue;
		}
		result = execute_command(command, argv);
	}
}
