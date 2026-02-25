#include <stdio.h>
int main()
{
    int n;
    int long long fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Enter a number starting from 1.");
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