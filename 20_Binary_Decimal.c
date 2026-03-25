//WAP to convert binary number into decimal number and vice versa.

#include <stdio.h>
#include <math.h>

int main()
{
    int choice;

    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        int binary, decimal = 0, i = 0, remainder;

        printf("Enter binary number: ");
        scanf("%d", &binary);

        while(binary > 0)
        {
            remainder = binary % 10;
            decimal += remainder * pow(2, i);
            binary /= 10;
            i++;
        }

        printf("Decimal = %d", decimal);
    }
    else if(choice == 2)
    {
        int decimal, binary = 0, i = 1, remainder;

        printf("Enter decimal number: ");
        scanf("%d", &decimal);

        while(decimal > 0)
        {
            remainder = decimal % 2;
            binary += remainder * i;
            decimal /= 2;
            i *= 10;
        }

        printf("Binary = %d", binary);
    }
    else
    {
        printf("Invalid choice");
    }

    return 0;
}
