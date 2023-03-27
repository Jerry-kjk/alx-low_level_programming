#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: first int to be swaped
 * @b: second int to be swaped
 * Return: always 0
 */


void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
