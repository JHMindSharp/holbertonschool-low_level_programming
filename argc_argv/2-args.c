#include <stdio.h>

/**
 * main - Ce programme affiche tous les arguments qu'il reçoit.
 *
 * @argc: Le nombre d'arguments.
 * @argv: Un tableau de chaînes de caractères contenant
 * les arguments de ligne de commande.
 *
 * Return: toujours 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

