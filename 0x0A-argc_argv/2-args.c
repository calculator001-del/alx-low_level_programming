#include<stdio.h>
#include<stdlib.h>

/**
 * main - Entry point of the program
 * @argc:number of arguments to the command line
 * @argv:array containing command line argument
 *
 * Description: program prints all the commands passed to it.
 * Return: exit(EXIT_SUCCESS)
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}
