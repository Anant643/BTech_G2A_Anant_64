#include <stdio.h>

int main()
{
    int r, c;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    if (r != c)
    {
        printf("Not a lower triangular matrix");
        return 0;
    }

    int arr[r][c];

    printf("Enter matrix elements:\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
        
            scanf("%d", &arr[i][j]);
        }
    }

    int lower = 1;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i < j && arr[i][j] != 0)
            {
                lower = 0;
                break;
            }
        }
    }

    if (lower)
        printf("Matrix is lower triangular");
    else
        printf("Matrix is not lower triangular");

    return 0;
}
