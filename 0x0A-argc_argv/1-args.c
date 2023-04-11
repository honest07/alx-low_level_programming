#include "main.h"
#include <stdio.h>

/**
 * main - Entry point that prints a number of arguments
 * passed to the program
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
