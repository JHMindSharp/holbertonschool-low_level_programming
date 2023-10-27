/**
 * is_separator - Check if a character is a word separator
 * @c: The character to check
 *
 * Return: 1 if c is a separator, 0 otherwise
 */
int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";

	for (int i = 0; separators[i]; i++)
	{
		if (c == separators[i])
		{
			return (1);
		}
	}

	return (0);
}

/**
 * cap_string - Capitalize all words in a string
 * @str: Input string
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
	char *ptr = str;
	int capitalize_next = 1;

	while (*str != '\0')
	{
		if (capitalize_next && *str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
			capitalize_next = 0;
		}
		else if (is_separator(*str))
		{
			capitalize_next = 1;
		}
		else
		{
			capitalize_next = 0;
		}
		str++;
	}

	return (ptr);
}

