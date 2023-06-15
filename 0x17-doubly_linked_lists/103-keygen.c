#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * generate_key - generates and prints passwords for the crackme5 executable.
 * @username: username.
 * Return: Always 0.
 */

char *generate_key(const char *username)
{
	size_t length = strlen(username);
	char *key = (char *)malloc(length + 1);

	size_t i;

	for (i = 0; i < length; i++)
	{
		key[i] = username[i] ^ (char)(i + 1);
	}
	key[length] = '\0';
	return (key);
}

/**
 * main - entry point.
 * @argc: arguments count.
 * @argv: argument vector.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	char *username;
	char *key;

	if (argc != 2)
	{
		printf("Usage: %s <username>\n", argv[0]);
		return (1);
	}
	username = argv[1];
	key = generate_key(username);

	printf("%s\n", key);
	free(key);
	return (0);
}
