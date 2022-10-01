#include "main.h"

/**
 * _memset - fill memory with constant byte
 * @s: memory pace to fill
 * @b: byte to fill with
 * @n: number of bytes to fill
 *
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}