#include "main.h"

int check_palidrome(char *s, int i, int len);
int is_palindrome(char *s);
int _strlen_recursion(char *s);

/**
 * is_palindrome - a function that returns 1 if a
 * string is a palindrome and 0 if not.
 * @s: the string to be revesed.
 * Return: 1 if it is, 0 it's not.
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palidrome(s, 0, _strlen_recursion(s)));
}

/**
 * check_palidrome - checks if a string is a palindrome.
 * @s: the string to be checked.
 * @len: length of the string.
 * @i: index of the string that will be checked.
 * Return: 1 if the string is palidrome or 0 it is not.
 */

int check_palidrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_palidrome(s, i + 1, len - 1));
}

/**
 * _strlen_recursion - returns the length of th string.
 * @s: string to be measured.
 * Return: length of the string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
