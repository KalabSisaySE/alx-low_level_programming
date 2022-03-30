#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: the number we want to find the factorial of.
 *
 * Return: the factorial of the number @n.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1 || n == 0)
		return (1);
	return (n * factorial(n - 1));
}
