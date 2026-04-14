#include<stdio.h>

int main()
{
    int r,c;

    printf("Enter rows and columns: ");
    scanf("%d%d",&r,&c);

    int arr[r][c];

    printf("Enter elements:\n");

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    int max = arr[0][0];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }

    printf("Largest element = %d",max);
}