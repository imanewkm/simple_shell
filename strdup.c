#include "shell.h"
/**
 * _strdup - copies original string into new string created
 * @s: pointer to string
 *
 * Return: Always 0 (success)
 */
char *_strdup(const char *s)
{
	char *p;
	int n = 0, length = 0;

	if (!s)
	{
		return (0);
	}
	while (*s)
	{
		length++;
		s++;
	}
	s -= length;
	p = malloc(sizeof(char) * (length + 1));
	if (!p)
	{
		return (0);
	}
	while (n <= length)
	{
		p[n] = s[n];
		n++;
	}
	return (p);
}
