//Wap in c to find sum of a column in a matrix

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

   for(int j=0;j<c;j++)
{
    int sum=0;

    for(int i=0;i<r;i++)
    {
        sum += arr[i][j];
    }

    printf("Column %d sum = %d\n",j+1,sum);
}