#include "3-calc.h"

/**
 * main - a program that performs simple operations.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: if success 0 but 98, 99 or 100 on failure.
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;
	int (*func)(int, int);
	char op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	op = *argv[2];
	if ((op == '/' || op == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = func(num1, num2);
	printf("%d\n", result);
	return (0);
}
