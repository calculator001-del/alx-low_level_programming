#include "main.h"

/**
 * function:_puts_recursion - prints string
 * @s:string to be printed
 *
 * Return: 0 on  success
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
