//Wap that prints all armstrong numbers from 1 to 100.

#include <stdio.h>
#include <math.h>

int main()
{
    int n;

    for (n = 1; n <= 100; n++)
    {
        int temp = n;
        int original = n;
        int count = 0;

        while (temp > 0)
        {
            count++;
            temp = temp / 10;
        }

        int sum = 0;
        int digit;
        temp = n;

        while (temp > 0)
        {
            digit = temp % 10;
            sum = sum + pow(digit, count);

            temp = temp / 10;
        }

        if (sum == original)
        {
            printf("%d ", n);
        }
    }

    return 0;
}
