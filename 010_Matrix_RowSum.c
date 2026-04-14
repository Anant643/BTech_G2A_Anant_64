//Wap in c to find sum of a row in a matrix

#include<stdio.h>

int main()
{
    int r,c;

    printf("Enter rows and columns: ");
    scanf("%d%d",&r,&c);

    int arr[r][c];

    printf("Enter matrix elements:\n");

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<r;i++)
    {
        int sum=0;

        for(int j=0;j<c;j++)
        {
            sum = sum + arr[i][j];
        }

        printf("Row %d sum = %d\n",i+1,sum);
    }
}