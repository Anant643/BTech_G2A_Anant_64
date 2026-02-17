//Wap to check whether the two numbers enetered by user are equal or not.

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the two numbers you want to compare: ");
    scanf("%d %d", &a, &b);

    if (a == b)
    {
        printf("Both numbers are equal!");
    }
    else
    {
        printf("The numbers are not equal!");
    }
    return 0;
}