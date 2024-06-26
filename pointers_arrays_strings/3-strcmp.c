/**
 * _strcmp - Compare two strings.
 * @s1: First string
 * @s2: Second string
 *
 * Return: Integer less than, equal to, or greater than zero if s1 is found,
 * respectively, to be less than, to match, or be greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (1)
	{
		if (*(s1 + i) != *(s2 + i) || *(s1 + i) == '\0' || *(s2 + i) == '\0')
			return (*(s1 + i) - *(s2 + i));
		i++;
	}

	/* Return 0 if strings are identical */
	return (0);
}
