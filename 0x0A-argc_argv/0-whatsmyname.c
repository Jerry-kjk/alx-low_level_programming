#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints its name.
 * @argc: number of argument.
 * @argv: array of argument.
 * Return: always 0 (success).
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
