#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer.
 * @s: string to be converted.
 * Return: int converted.
 */

int _atoi(char *s)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int len = 0;
	int x = 0;
	int digit = 0;

	while (s[len] != '\0')
		len++;
	while (a < len && x == 0)
	{
		if (s[a] == '-')
			b++;
		if (s[a] >= '0' && s[a] <= 9)
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
			c = c * 10 + digit;
			x = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			x = 0;
		}
		a++;
	}
	if (x == 0)
		return (0);
	return (c);
}

/**
 * main - a program that multiplies two numbers.
 * @argc: number of arguments.
 * @argv: array of argument.
 * Return: 1 if the program does not receive two argument
 * 0 if the program receives two arguments.
 */

int main(int argc, char *argv[])
{
	int prod;
	int num1;
	int num2;

	if (argc != 3)
		printf("Error\n");
	return (1);

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);
	return (0);
}
