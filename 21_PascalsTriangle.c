#include <stdio.h>

int main()
{
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        int val = 1;

        // Space formatting (for triangle shape)
        for(int s = 0; s < n - i - 1; s++)
        {
            printf(" ");
        }

        for(int j = 0; j <= i; j++)
        {
            printf("%d ", val);

            // Update value using formula
            val = val * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}