#include <stdio.h>
#include <ctype.h>

/**
 * _islower - checks for lowercase character
 *
 * @c: character to check
 *
 * Return: 1 or 0
 */
int _islower(int c)
{
	int result;

	result = 'a' <= c <= 'z' ? 0 : 1;
	return (result);
}