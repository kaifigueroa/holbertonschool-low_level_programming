#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: Pointer to the string
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: Pointer to the string to be printed
 *
 * Description: This function takes a pointer to a string and prints
 * each character in reverse order using the _putchar function.
 */
void print_rev(char *s)
{
	int length = _strlen(s);

	while (length > 0)
	{
		_putchar(s[length - 1]);
		length--;
	}
	_putchar('\n');
}
