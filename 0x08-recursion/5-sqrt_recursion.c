#include "main.h"

int _sqrt_recursion1(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: square root
 *
 * Return: the result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion1(n, 0));
}

/**
 * _sqrt_recursion1 - recurses to find the natural
 * square root of a number
 * @n: number to calculate 
 * @i: num of loops
 *
 * Return: the result
 */

int _sqrt_recursion1(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_recursion1(n, i + 1));
}
