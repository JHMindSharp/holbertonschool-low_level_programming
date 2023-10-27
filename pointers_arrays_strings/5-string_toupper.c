/**
 * string_toupper - Convert lowercase letters to uppercase
 * @str: Input string
 *
 * Return: Pointer to the modified string
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;  /* Convert lowercase to uppercase */
		}
		str++;
	}

	return (ptr);
}

