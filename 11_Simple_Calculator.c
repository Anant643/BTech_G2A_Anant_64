// WAP that takes two operands and one operator from the user, perform the operation,and prints the result by using Switch statement.

#include <stdio.h>
int main()
{
    int a, b;
    char op;

    printf("Enter two numbers to perform operations on: ");
    scanf("%d %d", &a, &b);

    printf("Select an operator (+ , - , * , / ,%%): ");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        printf("Result = %d", a + b);
        break;
    case '-':
        printf("Result = %d", a - b);
        break;
    case '*':
        printf("Result = %d", a * b);
        break;
    case '/':
        if (b == 0)
        {
            printf("Division by zero is not allowed.");
        }
        else
        {
            printf("Result = %.2f", (float)a / b);
            break;
        }
        break;
    case '%':
        if (b == 0)
        {
            printf("Modulus by zero is not allowed.");
        }
        else
        {
            printf("Result = %d", a % b);
            break;
        }
        break;
    default:
        printf("Invalid opeartor.");
        break;
    }

    return 0;
}