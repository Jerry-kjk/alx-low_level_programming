#include "main.h"
/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 *
 * Return: always 0 (success)
 */

void print_alphabet(void)
{
	char j;

	for (j = 'a' ; j <= 'z' ; j++)
		_putchar(j);
	_putchar('\n');
}
