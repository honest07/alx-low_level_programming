#include "main.h"
#include <stdio.h>

int actual_prime(int n, int i);

/**
 * is_prime_number - Entry point that returns a prime number
 * @n: the number to be checked
 * Return: integer value
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - Checks if the number is prime
 * @n: the number to be checked
 * @i: the iteration time
 * Return: 1 for prime or 0 composite
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % 1 == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (actual_prime(n, i + 1));
}
