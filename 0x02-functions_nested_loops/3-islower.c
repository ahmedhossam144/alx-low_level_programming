#include "main.h"

/**
 * _islower - check if char is lowercase
 * @c: see if c is lower. 
 * Return: 1 if true and 0 if false.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
