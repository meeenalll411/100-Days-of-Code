#include <stdio.h>

int main(void)
{
    float number1, number2, sum;

    printf("Enter two numbers: ");
    scanf("%f %f", &number1, &number2);

    sum = number1 + number2;

    printf("Sum = %.2f\n", sum);
}
