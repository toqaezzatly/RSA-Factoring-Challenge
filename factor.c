#include "factors.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
    FILE *fptr;
    size_t count = 0; // Initialize count to avoid potential issues
    char *buffer = NULL;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: factor <filename>\n");
        exit(EXIT_FAILURE);
    }
    fptr = fopen(argv[1], "r");
    if (fptr == NULL)
    {
        fprintf(stderr, "Error: can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    while (getline(&buffer, &count, fptr) != -1)
    {
        factorize(buffer);
    }
    free(buffer); // Free dynamically allocated buffer
    fclose(fptr);
    return 0;
}
