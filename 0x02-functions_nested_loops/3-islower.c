#include "main.h"
#include <stdio.h>

/**
 * _islower - checks if char is lowercase
 * @c: is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0
 */
int _islower(int c)
{
	return ((c >= 'a' && c <= 'z') ? 1 : 0);
}

/**
 * main - Check point of code.
 *
 * Return: Always 0.
 */
int main(void)
{
	char character = 'c';

	int output = _islower(character);
	{
		printf("%d\n", output);
	}
	return (0);
}
