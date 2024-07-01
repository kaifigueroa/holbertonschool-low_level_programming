#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: string to search in
 * @needle: substring to search for
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		/* Check for substring match starting from current haystack[i] */
		for (j = i, k = 0; needle[k] != '\0'; j++, k++)
		{
			if (haystack[j] != needle[k] || haystack[j] == '\0')
				break;
		}

		/* If full substring match is found, return starting address */
		if (needle[k] == '\0')
			return (&haystack[i]);
	}

	return ('\0');
}
