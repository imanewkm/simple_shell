#include "main.h"
/**
 * factorial - factorial of a given num
 * @n: input num
 * Return: 0
 */
int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
