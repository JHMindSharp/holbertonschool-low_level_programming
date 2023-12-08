#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - Checks the code for Task 0
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    if (ht == NULL)
    {
        fprintf(stderr, "Failed to create the hash table\n");
        return (EXIT_FAILURE);
    }

    printf("%p\n", (void *)ht);
    return (EXIT_SUCCESS);
}
