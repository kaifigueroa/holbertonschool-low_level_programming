#include "main.h"

/**
 * _puts - Prints a string followed by a new line to stdout
 * @str: Pointer to the string to be printed
 *
 * Description: This function takes a pointer to a string and prints
 * each character in the string using the _putchar function.
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
