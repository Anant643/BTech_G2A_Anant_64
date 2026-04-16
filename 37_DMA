//Largest among 20 integers using dynamic memory
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr, i, max;

    arr = (int *)malloc(20 * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    printf("Enter 20 numbers:\n");
    for (i = 0; i < 20; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];

    for (i = 1; i < 20; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    printf("Largest number = %d", max);

    free(arr);

    return 0;
}
