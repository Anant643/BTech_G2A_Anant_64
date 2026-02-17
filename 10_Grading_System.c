// WAP that accerpts the marks of 5 subjects and claculates the perecentage of it then grades it based on a given criteria.

#include <stdio.h>
int main()
{
    int s1, s2, s3, s4, s5, sum;
    float percentage;

    printf("Enter marks of first subject: ");
    scanf("%d", &s1);

    printf("Enter marks of second subject: ");
    scanf("%d", &s2);

    printf("Enter marks of third subject: ");
    scanf("%d", &s3);

    printf("Enter marks of fourth subject: ");
    scanf("%d", &s4);

    printf("Enter marks of fifth subject: ");
    scanf("%d", &s5);
    sum = s1 + s2 + s3 + s4 + s5;
    printf("Sum of marks of all subjects = %d\n", sum);

    percentage = (sum / 500.0) * 100;
    printf("Percentage = %.2f\n", percentage);

    if (percentage >= 90)
    {
        printf("Grade: A+\n");
    }
    else if (percentage >= 80)   
    {
        printf("Grade: A\n");
    }
    else if (percentage >= 70)
    {
        printf("Grade: B\n");
    }
    else if (percentage >= 60)
    {
        printf("Grade: C\n");
    }
    else if (percentage >= 50)
    {
        printf("Grade: D\n");
    }
    else
    {
        printf("Grade: FAIL\n");
    }

    return 0;

}
