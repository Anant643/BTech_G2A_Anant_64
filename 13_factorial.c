#include <stdio.h>
int main()
{
    int n;
    long long fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Please enter a whole number.");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        printf("factorial = %lld", fact);
    }

    return 0;

}
