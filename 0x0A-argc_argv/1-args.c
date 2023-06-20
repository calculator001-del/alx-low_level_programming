#include<stdio.h>
#include<stdlib.h>

/**
 * main - passing arguments to program
 * @argc:the number of command line arguments
 * @argv:array containing command line arguments
 *
 * Description: the program prints the number of arguments passed.
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	if (argv == 0)
	{
		return (0);
	}
	else
	{
	printf("%d\n", argc - 1);
	}
	return (0);
}
