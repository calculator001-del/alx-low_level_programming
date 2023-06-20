#include"main.h"

/**
 * function:_strlen_recursion - Returns the lenght of the string.
 * @s:string to be printed
 *
 * Return: length of the string.
 */

int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}
