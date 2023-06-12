#include<stdio.h>
#include<stdlib.h>

/**
 * main - Entry point of the program.
 * @argc:the number of command line arguments
 * @argv:array containing command line arguments
 *
 * Description: the program prints the arguments passed to the command line.
 * Return: zero (always success)
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
