#include "shell.h"
/**
 * free_array - frees array
 * @array: array
 * Return: always 0
 */
void free_array(char **array)
{

	int i = 0;

	if (array == NULL)
	{
		return;
	}
	while (array[i])
	{
		printf("%s\n", array[i]);
		free_pointer(array[i]);
		i++;
	}
	free(array);
	array = NULL;
}
