#include<stdio.h>
#include<stdlib.h>

/**
 * main - entry point of program
 * @argc:number of command line passed to a program.
 * @argv:array of string argument passed to command line.
 *
 * Description: the program prints the multiplication of two arguments
 *
 * Return: 1 on error.
 */

int main(int argc, char *argv[])
{
	int i, product = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			product *= atoi(argv[i]);
		}
			printf("%d\n", product);
	}
	else
	{
		printf("Error.\n");
		return (1);
	}
	return (0);
}
