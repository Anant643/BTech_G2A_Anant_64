// WAP to calculate SI CI.
#include <stdio.h>
#include <math.h>

int main()
{
    float P, R, T, Amount;
    float CI, SI;

    printf("Enter the principal: ");
    scanf("%f", &P);

    printf("Enter the rate: ");
    scanf("%f", &R);

    printf("Enter the time: ");
    scanf("%f", &T);

    SI = (P*R*T)/100;
    printf("Simple interest = %.2f\n",SI);
    
    Amount = P * pow((1+R/100),T);
    CI = Amount - P;

    printf("Compound interest = %.2f",CI);


    return 0;
}