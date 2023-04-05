#include "main.h"

int find_prime(int n, int i);
int is_prime_number(int n);

/**
 * is_prime_number - a function that returns 1 if the
 * input integer is a prime number, otherwise return 0.
 * @n: number to be evaluated.
 * Return: 1 if n is a prime number, 0 if not.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (find_prime(n, n - 1));
}

/**
 * find_prime - checks if a number is found.
 * @n: number to be evaluated.
 * @i: integer.
 * Return: 1 if n is a prime number, 0 if not.
 */

int find_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (find_prime(n, i - 1));
}
