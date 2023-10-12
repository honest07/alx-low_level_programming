#include "main.h"

/**
 * print_alphabet_x10 - Entry point to print 10 times the alphabet
 * in lowercase
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int occur;
	int i = 0;

	alphabet = 'a';
	occur = 10;

	for (i < occur; i++;)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}

