#include <stdio.h>

int main(void)
{
    float number1, number2;

    printf("Enter two numbers: ");
    scanf("%f %f", &number1, &number2);

    printf("Sum = %.2f\n", number1 + number2);
    printf("Difference = %.2f\n", number1 - number2);
    printf("Product = %.2f\n", number1 * number2);

    if (number2 != 0)
    {
        printf("Quotient = %.2f\n", number1 / number2);
    }
    else
    {
        printf("Division by zero is not allowed.\n");
    }
}
