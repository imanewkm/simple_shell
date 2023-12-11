#include "shell.h"
/**
 * free_pointer - frees memory
 * @p: pointer
 * Return: Always 0 (success)
 */
void free_pointer(char *p)
{
	free(p);
	p = NULL;
}
