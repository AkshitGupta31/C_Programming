#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Using malloc to allocate memory for an integer
    int *ptr_malloc = (int *)malloc(sizeof(int));

    if (ptr_malloc == NULL)
    {
        printf("Memory allocation failed for malloc.\n");
        return 1;
    }

    // Assigning a value to the allocated memory
    *ptr_malloc = 10;

    printf("Value allocated using malloc: %d\n", *ptr_malloc);

    // Using calloc to allocate memory for an array of 5 integers
    int *ptr_calloc = (int *)calloc(5, sizeof(int));

    if (ptr_calloc == NULL)
    {
        printf("Memory allocation failed for calloc.\n");
        free(ptr_malloc); // Freeing the memory allocated by malloc
        return 1;
    }

    printf("Values allocated using calloc:\n");
    for (int i = 0; i < 5; ++i)
    {
        printf("%d ", ptr_calloc[i]);
    }
    printf("\n");

    // Using realloc to resize the previously allocated memory for ptr_calloc
    int *ptr_realloc = (int *)realloc(ptr_calloc, 10 * sizeof(int));

    if (ptr_realloc == NULL)
    {
        printf("Memory reallocation failed for realloc.\n");
        free(ptr_malloc); // Freeing the memory allocated by malloc
        free(ptr_calloc); // Freeing the memory allocated by calloc
        return 1;
    }

    printf("Values after reallocating memory:\n");
    for (int i = 0; i < 10; ++i)
    {
        printf("%d ", ptr_realloc[i]);
    }
    printf("\n");

    // Freeing the allocated memory
    free(ptr_malloc);
    free(ptr_realloc);

    return 0;
}
