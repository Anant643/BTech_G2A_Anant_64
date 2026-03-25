// WAP that simply takes elements of the array from the user and find the sum of those elements.

#include <stdio.h>
int main()
{
    int n;
    printf("How many elements do you want in the array:");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements in the array:", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    printf("Sum of the array elements = %d", sum);
    return 0;
}
