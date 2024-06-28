#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Input string.
 *
 * Description:
 * This function reverses the string 's' in place.
 */
void rev_string(char *s)
{
	int length = 0;
	char *start, *end, temp;

	/* Find the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}

	/* Initialize pointers */
	start = s;
	end = s + length - 1;

	/* Swap characters from start to end */
	while (start < end)
	{
		/* Swap characters */
		temp = *start;
		*start = *end;
		*end = temp;

		/* Move pointers */
		start++;
		end--;
	}
}
