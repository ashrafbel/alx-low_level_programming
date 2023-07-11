#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * split_string - Splits a string into an array of strings based on a delimiter
 * @str: The string to split
 * @delimiter: The delimiter character
 *
 * Return: An array of strings
 */
char **split_string(const char *str, char delimiter)
{
    char **result = NULL;
    char *copy, *token;
    int count = 0;

    copy = strdup(str); /* Create a copy of the original string */

    /* Count the number of tokens in the string */
    token = strtok(copy, &delimiter);
    while (token != NULL) {
        count++;
        token = strtok(NULL, &delimiter);
    }

    /* Allocate memory for the array of strings */
    result = malloc((count + 1) * sizeof(char *));
    if (result == NULL) {
        perror("malloc");
        return NULL;
    }

    /* Split the string and store each token in the array */
    count = 0;
    token = strtok(strdup(str), &delimiter);
    while (token != NULL) {
        result[count] = strdup(token);
        count++;
        token = strtok(NULL, &delimiter);
    }
    result[count] = NULL; /* Set the last element of the array to NULL */

    free(copy); /* Free the copied string */

    return result;
}

/**
 * free_tab - Frees memory allocated for an array of strings
 * @tab: The array to free
 *
 * Return: nothing
 */
void free_tab(char **tab)
{
    int i;

    for (i = 0; tab[i] != NULL; i++) {
        free(tab[i]);
    }
    free(tab);
}

/**
 * print_tab - Prints an array of strings
 * @tab: The array to print
 *
 * Return: nothing
 */
void print_tab(char **tab)
{
    int i;

    for (i = 0; tab[i] != NULL; i++) {
        printf("%s\n", tab[i]);
    }
}

int main(void)
{
    char **tab;

    tab = split_string("      ALX School         #cisfun      ", ' ');
    if (tab == NULL) {
        printf("Failed to split the string.\n");
        return 1;
    }

    print_tab(tab);

    free_tab(tab);

    return 0;
}

