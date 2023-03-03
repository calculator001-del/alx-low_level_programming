#include <stdio.h>
#include <unistd.h>

/**
 * print_char - function declararation
 * DESCRIPTION: print _putcher, has no arguementss
 * Return: has no return value
 */

char print_char(void);

/**
 * main - entry point
 * DESCRIPTION: calls print_char()
 * Return: 0
 */

int main(void)
{
	 print_char();
	 return (0);
}

/**
 * print_char -function definition
 * Description: print out '_putchar'
 * Return: has no return value
 */

char print_char(void)
{
	char my_string_array[] = "_putchar\n";
	int index = 0;

	while (my_string_array[index] != '\n')
	{
		char letter = my_string_array[index];

		putchar(letter);
		index++;
	}
	return (0);
}
