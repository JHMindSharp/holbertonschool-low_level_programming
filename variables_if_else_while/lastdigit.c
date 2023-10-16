#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description:Generates a random number, calculates its last digit,
 * and prints different messages based on the value of the last digit.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;

        printf("The string Last digit of, followed by\n");
        printf("%d is", n);

        int lastDigit = n % 10; /* Assignation de la valeur à la variable */

        printf(" %d and is", lastDigit); /* Modification de cette ligne */

        if (lastDigit > 5)
        {
                printf("greater than 5\n");
        }
        else if (lastDigit == 0)
        {
                printf("0\n");
        }
        else
        {
                printf("less than 6 and not 0\n");
        }

        printf("followed by a new line\n");

        return (0);
}

