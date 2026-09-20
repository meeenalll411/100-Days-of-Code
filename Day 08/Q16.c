#include <stdio.h>

int main(void)
{
    float number1, number2, number3, largest;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &number1, &number2, &number3);

    if (number1 >= number2 && number1 >= number3)
    {
        largest = number1;
    }
    else if (number2 >= number1 && number2 >= number3)
    {
        largest = number2;
    }
    else
    {
        largest = number3;
    }

    printf("The largest number is %.2f\n", largest);
}
