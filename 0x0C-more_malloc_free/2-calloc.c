#include <stdlib.h>
#include "main.h"
				
/**
 * *_memset - fills memory with const byte
 * @s: memory to be filled 
 * @b: char 
 * @n: num of times to copy b		
 *
 * Return: pointer to the memory s
 */
		
char *_memset(char *s, char b, unsigned int n)		
{
	unsigned int i;
		
	for (i = 0; i < n; i++)	
	{
		s[i] = b;
	}
		
	return (s);		
}
		
		
/**
 * *_calloc - allocates memory in arr
 * @nmemb: num of elements in the arr
 * @size: size of elements		
 *
 * Return: pointer to defined memory
 */
		
void *_calloc(unsigned int nmemb, unsigned int size)		
{		
	char *ptr;
		

	if (nmemb == 0 || size == 0)
		return (NULL);
		
	ptr = malloc(size * nmemb);
		
	if (ptr == NULL)
		return (NULL);
		
	_memset(ptr, 0, nmemb * size);
		
	return (ptr);		
}
