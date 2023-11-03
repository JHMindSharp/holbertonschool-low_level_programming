#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_positive_number - Vérifie si une chaîne de caractères
 * est un nombre positif.
 *
 * @str: La chaîne de caractères à vérifier.
 *
 * Return: 1 si la chaîne est un nombre positif, 0 sinon.
 */
int is_positive_number(char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}

/**
 * main - Ce programme additionne des nombres positifs et
 * affiche le résultat.
 *
 * @argc: Le nombre d'arguments.
 * @argv: Un tableau de chaînes de caractères contenant les
 * arguments de ligne de commande.
 *
 * Return: 0 si l'addition est réussie, 1 en cas d'erreur.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_positive_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}


