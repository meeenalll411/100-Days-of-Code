#include <stdio.h>

int main(void)
{
    int number, originalNumber, temporaryNumber;
    int remainder, digits = 0;
    int i;
    long long power, sum = 0;

    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("%d is not an Armstrong number.\n", number);
    }
    else
    {
        originalNumber = number;
        temporaryNumber = number;

        if (temporaryNumber == 0)
        {
            digits = 1;
        }
        else
        {
            while (temporaryNumber != 0)
            {
                digits++;
                temporaryNumber = temporaryNumber / 10;
            }
        }

        temporaryNumber = number;

        do
        {
            remainder = temporaryNumber % 10;
            power = 1;

            for (i = 1; i <= digits; i++)
            {
                power = power * remainder;
            }

            sum = sum + power;
            temporaryNumber = temporaryNumber / 10;

        } while (temporaryNumber != 0);

        if (sum == originalNumber)
        {
            printf("%d is an Armstrong number.\n", originalNumber);
        }
        else
        {
            printf("%d is not an Armstrong number.\n", originalNumber);
        }
    }

    return 0;
}
