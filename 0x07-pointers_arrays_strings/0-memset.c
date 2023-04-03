#include "main.h"
/**
 * _memset - putting an adress in a specific memory
 * @s: starting address of memory 
 * @b: value
 * @n: bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
