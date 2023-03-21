#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character.
 *
 * @c: parameter
 *
 * Return: 1 for lowercase
 * and 0 otherwise (success)
 */

int _isalpha(int c)
{
	if ((c <= 97 && c >= 122) || (c <= 65 && c >= 90))
		return (1);
	else
		return (0);
}
