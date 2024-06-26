#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to encode.
 *
 * Return: Pointer to the resulting string.
 */
char *leet(char *str)
{
	char leet_map[5][2] = {
		{'a', '4'},
		{'e', '3'},
		{'o', '0'},
		{'t', '7'},
		{'l', '1'}
	};
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (j < 5)
		{
			if (str[i] == leet_map[j][0] || str[i] == leet_map[j][0] - ('a' - 'A'))
			{
				str[i] = leet_map[j][1];
				break;
			}
			j++;
		}
		i++;
	}

	return (str);
}
