#include <stdio.h>
#include <stdlib.h>

/**
 * main - Ce programme multiplie deux nombres et affiche le résultat.
 *
 * @argc: Le nombre d'arguments.
 * @argv: Un tableau de chaînes de caractères contenant
 * les arguments de ligne de commande.
 *
 * Return: 0 si la multiplication est réussie, 1 en cas d'erreur.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}

