#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - function definitions
 * Description: print numbers to 98
 * @n: number to start with
 * Return: void
 */

void print_to_98(int n)
{
	int start;

	if (n > 98)
	{
		for (start = n; start >= 98; start--)
		{
			printf("%d", start);
			if (start != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (start = n; start <= 98; start++)
		{
			printf("%d", start);
			if (start != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
