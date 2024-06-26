#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum number of bytes to be used from src
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_end = dest;
	int i;

	/* Find the end of the destination string */
	while (*dest_end != '\0')
	{
		dest_end++;
	}

	/*
	 * Copy up to n bytes from the source string
	 * to the end of destination string
	 */
	for (i = 0; i < n && *src != '\0'; i++)
	{
		*dest_end = *src;
		dest_end++;
		src++;
	}

	/* Add null terminator at the end */
	*dest_end = '\0';

	return (dest);
}
