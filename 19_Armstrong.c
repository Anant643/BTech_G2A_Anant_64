#include <stdio.h>
#include <math.h>

int main()
{
    int n, temp, original;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    original = n;

    int count = 0;

    while (temp > 0)
    {
        count++;
        temp = temp / 10;
    }

    int digit;
    int sum = 0;

    while (n > 0)
    {
        digit = n % 10;
        sum = sum +pow(digit, count);
        n = n / 10;
    }

    if (sum == original)
        printf("It is an Armstrong Number.");
    else
        printf("Not an Armstrong Number.");

    return 0;
}