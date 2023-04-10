#include "main.h"

/**
 * _islower - a function that checks for lowercase character.
 * @c: parameter.
 *
 * Return: 1 for lowercase and 0 otherwise (success).
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
