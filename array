#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of ints
 * @min: int
 * @max: int
 * Return: 0
 */
int *array_range(int min, int max)
{
	int *str;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	str = malloc((max - min + 1) * sizeof(int));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++, min++)
	{
		str[i] = min;
	}
	return (str);
}
