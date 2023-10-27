#include "main.h"

/**
 * is_separator - Vérifie si un caractère est un séparateur.
 * @c: Le caractère à vérifier.
 *
 * Return: 1 si c'est un séparateur, 0 sinon.
 */
int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i]; i++)
	{
		if (c == separators[i])
			return (1);
	}
	return (0);
}

/**
 *  cap_string - Met en majuscule la première lettre de chaque mot
 *  dans une chaîne.
 * @str: La chaîne d'entrée.
 *
 * Return: Un pointeur vers la chaîne modifiée.
 */
char *cap_string(char *str)
{
	int i;
	int capitalize = 1;

	for (i = 0; str[i]; i++)
	{
		if (is_separator(str[i]))
		{
			capitalize = 1;
		}
		else if (capitalize && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			capitalize = 0;
		}
		else
		{
			capitalize = 0;
		}
	}

	return (str);
}

