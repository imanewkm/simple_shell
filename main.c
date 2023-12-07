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
	(void) argv;

	while (true)
	{
		input = read_input();
		if (!input) /* ctrl + D command */
		{
			return (0);
		}
		free(input);
	}
}
