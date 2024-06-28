#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first
 *         character, followed by a new line.
 * @str: input string.
 */
void puts2(char *str)
{
	/* Initialize index variable */
	int i = 0;

	/* Loop through the string */
	while (str[i] != '\0')
	{
		/* Check if index is even */
		if (i % 2 == 0)
			_putchar(str[i]);

/* Print character if index is even. Move to the next character */
		i++;
	}
	_putchar('\n');
}
