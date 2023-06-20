#include"main.h"

/**
 * function: factorial - returns factorial of a number.
 * @n:number which its factorial is to be returned.
 *
 * Return: factorial of n on success
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
