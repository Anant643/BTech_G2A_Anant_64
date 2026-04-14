//WAP to check skew symmetric matrix

#include<stdio.h>

int main()
{
    int r,c;

    printf("Enter rows and columns: ");
    scanf("%d%d",&r,&c);

    if(r != c)
    {
        printf("Matrix is not skew-symmetric");
        return 0;
    }

    int arr[r][c];

    printf("Enter matrix elements:\n");

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    int skew = 1;

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(arr[i][j] != -arr[j][i])
            {
                skew = 0;
                break;
            }
        }
    }

    if(skew)
        printf("Matrix is skew-symmetric");
    else
        printf("Matrix is not skew-symmetric");
}