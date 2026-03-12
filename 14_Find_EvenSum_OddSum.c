#include <stdio.h>

int main()
{
    int n, i;
    int evenSum = 0, oddSum = 0;

    printf("Enter upper limit: ");
    scanf("%d", &n);

    if(n < 1)
    {
        printf("Enter a positive number.");
        return 0;
    }

    for(i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
            evenSum += i;
        else
            oddSum += i;
    }

    printf("Sum of even numbers = %d\n", evenSum);
    printf("Sum of odd numbers = %d\n", oddSum);

    return 0;
}
