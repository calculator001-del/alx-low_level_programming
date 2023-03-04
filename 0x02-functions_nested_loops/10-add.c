#include "main.h"

/**
 * add - adds two integers and returns the result
 * @a: int to be added to b
 * @b: int to be added to a
 * Return: sum of a and b
 */
int add(int a, int b)
{
	int c;

	c = a + b;

	return (c);
}


11-print_to_98.c

#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print from this number
 */
void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else if (i == 98)
				printf("%d\n", i);
		}
	} else if (n >= 98)
	{
		for (j = n; j >= 98; j--)
		{
			if (j != 98)
				printf("%d, ", j);
			else if (j == 98)
				printf("%d\n", j);
		}
	}
}
