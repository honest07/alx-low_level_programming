#include "main.h"

/**
 * print_triangle - Entry point prints a trangle follwed by a new line
 * @size: size of the triangle
 * Return: Always 0
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = i; j < size; j++)
		{
			_putchar(' ');
		}

		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
	}
}
