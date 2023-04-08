#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: number of arguments.
 * @argv: array of argument.
 * Return: 1 if the program does not receive two argument
 * 0 if the program receives two arguments.
 */

int main(int argc, char *argv[])
{
	int i;
	int j;

	j = 1;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < 3; i++)
			j *= atoi(argv[i]);
		printf("%d\n", j);
	}
	return (0);
}
