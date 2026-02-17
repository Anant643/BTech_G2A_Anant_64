#include <stdio.h>
int main()
{
    float Cel, Far, Result;
    int choice;

    printf("!!!!!Temperature Converter!!!!!\n");
    printf("1. Celcius to Farheneit\n");
    printf("2. Farhheneit to Celcius\n");
    printf("ENTER YOUR CHOICE (1/2):");
    scanf("%d", &choice);
    while (choice != 1 && choice!= 2)
    {
        printf("Invalid choice\n");
        printf("ENTER YOUR CHOICE (1/2):");
        scanf("%d", &choice);
        
        }
    switch (choice)
    {
    case 1:
        printf("Converting Celcius into Farheneit:-\n");
        printf("Enter the temperature in Celcius:");
        scanf("%f", &Cel);
        Far = Cel * (9.0 / 5.0) + 32;
        printf("Temperature in Farheneit = %.2f", Far);
        break;
    case 2:
        printf("Converting Farheneit into Celcius:-\n");
        printf("Enter the temperature in Farheneit:");
        scanf("%f", &Far);
        Cel = (Far - 32) * 5.0 / 9.0;
        printf("Temperature in Celcius = %.2f", Cel);
    }
    return 0;
}