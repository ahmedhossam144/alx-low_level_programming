#include "main.h"

/**
 * _islower - check if char is lowercase
 * made by ahmed hossam 
 * Return: 1 if true and 0 if false.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
