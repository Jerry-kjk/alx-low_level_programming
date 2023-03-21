#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number.
 *
 * @x: parameter
 *
 * Return: always y (success)
 */

int print_last_digit(int x)
{
	int y;

	y = x % 10;
	if (x < 0)
		y = -y;
	_putchar(y + '0');
	return (y);
}
