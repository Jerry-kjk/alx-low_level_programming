#include "main.h"

/**
 * _puts - Entry point.
 * @s: string data type.
 * Return: s.
 */

void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
