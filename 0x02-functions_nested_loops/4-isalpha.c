4-isalpha.c

#include "main.h"

/**
 * _isalpha - checks for the letter c.
 * @c: the character to be checked
 * Return: 1 if c is a letter and 0 if not.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
