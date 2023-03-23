#include "main.h"

/**
 * _isupper - a function that checks for uppercase character.
 *
 * @x: parameter to check
 *
 * Return: 0 or 1
 */

int _isupper(int x)
{
	if (x >= 'A' && x <= 'Z')
		return (1);
	else
		return (0);
}

