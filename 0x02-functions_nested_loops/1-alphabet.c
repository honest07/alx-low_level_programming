#include "main.h"

/**
 * print_alphabet - Entry point that prints all alphabets
 * in lowercase
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
