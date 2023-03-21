#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10x the alphabet in lowercase
 *
 * Return: always 0 (success)
 */

void print_alphabet_x10(void)
{
	int j;
	char k;

	for (j = 1 ; j <= 10 ; j++)
	{
		for (k = 'a' ; k <= 'z' ; k++)
			_putchar(k);
		_putchar('\n');
	}
}
