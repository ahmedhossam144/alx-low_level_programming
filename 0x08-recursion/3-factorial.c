#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: fact recursion
 *
 * Return: int fact
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
