#include <stdio.h>

int main(void)
{
    int number1, number2;
    char operator;

    printf("Enter the first number: ");
    scanf("%d", &number1);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    printf("Enter the second number: ");
    scanf("%d", &number2);

    switch (operator)
    {
        case '+':
            printf("Result = %d\n", number1 + number2);
            break;

        case '-':
            printf("Result = %d\n", number1 - number2);
            break;

        case '*':
            printf("Result = %d\n", number1 * number2);
            break;

        case '/':
            if (number2 == 0)
            {
                printf("Division by zero is not allowed.\n");
            }
            else
            {
                printf("Result = %.2f\n",
                       (float)number1 / number2);
            }
            break;

        case '%':
            if (number2 == 0)
            {
                printf("Modulo by zero is not allowed.\n");
            }
            else
            {
                printf("Remainder = %d\n", number1 % number2);
            }
            break;

        default:
            printf("Invalid operator.\n");
    }
}
