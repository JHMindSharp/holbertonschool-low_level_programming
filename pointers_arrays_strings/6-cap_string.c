/**
 * cap_string - Capitalize all words in a string
 * @str: Input string
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int capitalize_next = 1;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			capitalize_next = 0;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
			capitalize_next = 0;
		}
		else
		{
			capitalize_next = 0;
		}

		for (int j = 0; separators[j] != '\0'; j++)
		{
			if (str[i] == separators[j])
			{
				capitalize_next = 1;
				break;
			}
		}
	}

	return (str);
}

