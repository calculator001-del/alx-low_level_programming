#include<stdio.h>
#include<stdlib.h>

/**
 * main - entry pooint of the arguments
 * @argc:argument count passed to the command line
 * @argv:number of arguments passed to command line
 *
 * Description: this program performs addition of positive numbers
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i, sum;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0.\n");
	}
	return (0);
}
