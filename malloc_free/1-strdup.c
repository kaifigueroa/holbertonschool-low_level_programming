#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated
 * space in memory,which contains a copy of the string
 * given as a parameter.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL if insufficient
 * memory was available or if str is NULL.
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int len = 0;
	unsigned int i = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);

	while (i <= len)
	{
		dup[i] = str[i];
		i++;
	}

	return (dup);
}
