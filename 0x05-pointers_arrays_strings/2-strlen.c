#include <stdio.h>

/**
 * _strlen - Entry point that retruns the length of a string.
 * @str: The string to get the length of
 * Return: Always 0
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
