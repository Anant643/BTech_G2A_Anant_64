// WAP to check whether an year is leap year or not.

#include <stdio.h>

int main()
{
    int year;
    printf("Enter the year you want to check:");
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        printf("%d is a leap year.", year);
    }
    else
    {
        printf("Not a leap year.");
    }
    return 0;
}