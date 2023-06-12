#include<stdio.h>
#include<stdlib.h>

/**
 * main - Entry point of the program.
 * @argc:the number of command line arguments
 * @argv:array containing command line arguments
 *
 * Description: the program prints the arguments passed to the command line.
 * Return: exit(EXIT_SUCCESS)
 */

int main(int argc, char *argv[])
{
	while (argc--)
	printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}
