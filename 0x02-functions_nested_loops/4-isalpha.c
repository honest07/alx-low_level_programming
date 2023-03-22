#include "main.h"

/**
 * _isalpha - Entry point that checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is letter, otherwise 0
 */
int _isalpha(int c)
{
	return ((c >= 'a'; &&c <= 'z') ||
			(c >= 'A'; &&c <= 'Z'));
}
