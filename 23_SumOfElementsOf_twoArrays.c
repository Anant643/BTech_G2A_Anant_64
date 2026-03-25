// WAP that takes input in two arrays and prints thier sum  of coressponding elements in a third array and display it.

#include <stdio.h>
int main()
{
    int n;
    printf("How many elements do you want in the array:");
    scanf("%d", &n);

    int arr1[n];
    printf("Enter the elements in the first array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    int arr2[n];
    printf("Enter the elements in the second array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }
    int arr3[n];
    for (int i = 0; i < n; i++)
    {
        arr3[i] = arr1[i] + arr2[i];
    }
    printf("Sum of the arrays are =\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr3[i]);
    }
    return 0;
}
