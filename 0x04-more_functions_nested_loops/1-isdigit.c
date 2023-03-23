#include "main.h"

/**
 * _isdigit - checks for digit between 0 - 9
 * @C: the integer to be ckecked
 *
 * Return: 1 if true and 0 if false.
 */

int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	else
		return (0);
}
