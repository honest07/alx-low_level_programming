#include <stdio.h>

/**
 * _islower - checks if char is lowercase
 * @c: is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0
 */
int _islower(char c)
{
	if (c >= 'a' &&c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * _islower - checks character c
 *
 * Return: Always 0
 */
int main(void)
{
	char character = 'c';

	int result = _islower;

	if (result == 1)
	{
		printf("%c is a lowercase letter\n", character);
	}
	else
	{
		printf("%c is not a lowercase letter\n", character);
	}
	return (0);
}
