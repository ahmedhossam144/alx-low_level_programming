#include "main.h"

int _prime1(int n, int i);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if false
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime1(n, n - 1));
}

/**
 * _prime1 - calculates if a number is prime recursively
 * @n: numb
 * @i: num of loops
 *
 * Return: 1 if n is prime, 0 if false
 */
int _prime1(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (_prime1(n, i - 1));
}
