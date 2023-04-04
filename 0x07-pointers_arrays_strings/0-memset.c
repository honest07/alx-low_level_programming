#include "main.h"

/**
 * _memset - Entry point
 * @s: pointed destination
 * @b: the desired bytes
 * @n: number of bytes to be changed
 * Return: Always 0 (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
