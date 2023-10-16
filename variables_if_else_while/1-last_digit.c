#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: This program generates a random number, calculates its last digit,
 * and prints different messages based on the value of the last digit.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;
    int lastDigit; // Déclaration de la variable au début de la fonction

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    printf("The string Last digit of, followed by\n");
    printf("%d, followed by\n", n);
    printf("the string is, followed by\n");

    lastDigit = n % 10; // Assignation de la valeur à la variable

    if (lastDigit > 5)
    {
        printf("if the last digit of n is greater than 5: the string and is greater than 5\n");
    }
    else if (lastDigit == 0)
    {
        printf("if the last digit of n is 0: the string and is 0\n");
    }
    else
    {
        printf("if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0\n");
    }

    printf("followed by a new line\n");

    return (0);
}

