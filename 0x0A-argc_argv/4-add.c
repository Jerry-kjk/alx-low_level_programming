#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: If no number is passed to the program, print 0
 * If one of the number contains symbols that are not digits, print Error
 * and return 1.
 */

int main(int argc, char **argv)
{
	    int sum = 0;
	        int i;

		    for (i = 1; i < argc; i++)
			        {
					        if (is_number(argv[i]))
							            sum += atoi(argv[i]);
						        else
								        {
										            printf("Error\n");
											                return (1);
													        }
							    }
		        printf("%d\n", sum);
			    return (0);
}

/**
 * is_number - cheks if the string represents a positive integer.
 * @s: string to be checked.
 * Return: if the string represents a positive integer 1 or 0 otherwhise.
 */

int is_number(char *s)
{
	    if (*s == '\0')
		            return (0);
	        while (*s != '\0')
			    {
				            if (*s < '0' || *s > '9')
						                return (0);
					            s++;
						        }
		    return (1);
}
