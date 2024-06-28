#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The integer converted from the string.
 */
int _atoi(char *s)
{
	unsigned int sign = 1, num = 0, started = 0;

	while (*s)
	{
		if (*s == ' ' && !started)
		{
			s++;
		}
		else if (*s == '-')
		{
			sign *= -1;
			s++;
		}
		else if (*s == '+')
		{
			s++;
		}
		else if (*s >= '0' && *s <= '9')
		{
			num = num * 10 + (*s - '0');
			started = 1;
			s++;
		}
		else if (started)
		{
			break; /* Stop processing if non-digit character
					*is encountered after digits have started
					*/
		}
		else
		{
			s++; /* Skip any leading non-digit characters */
		}
	}

	return (sign * num);
}
