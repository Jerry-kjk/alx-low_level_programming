#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point.
 * @argc: arguments count.
 * @argv: argument vector.
 * Return: Always 0.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char pswd[7];
	char *code;
	int len = strlen(argv[1]), i, tmp;

	code  = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	tmp = (len ^ 59) & 63;
	pswd[0] = code[tmp];

	tmp = 0;
	for (i = 0; i < len; i++)
		tmp += argv[1][i];
	pswd[1] = code[(tmp ^ 79) & 63];

	tmp = 1;
	for (i = 0; i < len; i++)
		tmp *= argv[1][i];
	pswd[2] = code[(tmp ^ 85) & 63];

	tmp = 0;
	for (i = 0; i < len; i++)
	{
		if (argv[1][i] > tmp)
			tmp = argv[1][i];
	}
	srand(tmp ^ 14);
	pswd[3] = code[rand() & 63];

	tmp = 0;
	for (i = 0; i < len; i++)
		tmp += (argv[1][i] * argv[1][i]);
	pswd[4] = code[(tmp ^ 239) & 63];

	for (i = 0; i < argv[1][0]; i++)
		tmp = rand();
	pswd[5] = code[(tmp ^ 229) & 63];

	pswd[6] = '\0';
	printf("%s", pswd);
	return (0);
}
