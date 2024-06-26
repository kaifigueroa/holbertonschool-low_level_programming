#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *dest_end = dest;

	/* Find the end of the destination string */
	while (*dest_end != '\0')
	{
		dest_end++;
	}

	/* Copy the source string to the end of destination string */
	while (*src != '\0')
	{
		*dest_end = *src;
		dest_end++;
		src++;
	}

	/* Add null terminator at the end */
	*dest_end = '\0';

	return (dest);
}
