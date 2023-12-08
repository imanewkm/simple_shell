#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: str1
 * @s2: str2
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	for ( ; *s1 == *s2; s1++, s2++)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
