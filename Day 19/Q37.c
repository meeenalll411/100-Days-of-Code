#include <stdio.h>

int main(void)
{
    long long number1, number2;
    long long firstNumber, secondNumber;
    long long remainder, gcd, lcm;

    printf("Enter two integers: ");
    scanf("%lld %lld", &number1, &number2);

    if (number1 < 0)
    {
        number1 = -number1;
    }

    if (number2 < 0)
    {
        number2 = -number2;
    }

    if (number1 == 0 || number2 == 0)
    {
        printf("LCM = 0\n");
    }
    else
    {
        firstNumber = number1;
        secondNumber = number2;

        while (secondNumber != 0)
        {
            remainder = firstNumber % secondNumber;
            firstNumber = secondNumber;
            secondNumber = remainder;
        }

        gcd = firstNumber;
        lcm = (number1 / gcd) * number2;

        printf("LCM = %lld\n", lcm);
    }

    return 0;
}
