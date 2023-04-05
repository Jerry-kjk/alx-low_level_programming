#include "main.h"

int sqrt_check(int n, int i);

/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number.
 * @n: number to return the square root of.
 * Return: result of the  square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqrt_check(n, 1));
}

/**
 * sqrt_check - checks for the square root of a number.
 * @n: the number to check.
 * @i: integer.
 * Return: result of the  square root.
 */

int sqrt_check(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (sqrt_check(n, i + 1));
}
