#include <stdio.h>

/**
 * _strlen - Entry point that retruns the length of a string.
 * @str: Makes changes
 * Return: Always 0
 */
size_strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
