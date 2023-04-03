#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory stored
 *@src: memory taken
 *@n: num of bytes
 *
 *Return: adress with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0, i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
