#include <stdio.h>

int main(void)
{
    long long number;
    int digit;
    long long product = 1;
    int oddDigitFound = 0;

    printf("Enter a number: ");
    scanf("%lld", &number);

    if (number < 0)
    {
        number = -number;
    }

    while (number != 0)
    {
        digit = number % 10;

        if (digit % 2 != 0)
        {
            product = product * digit;
            oddDigitFound = 1;
        }

        number = number / 10;
    }

    if (oddDigitFound == 1)
    {
        printf("Product of odd digits = %lld\n", product);
    }
    else
    {
        printf("The number does not contain any odd digits.\n");
    }

    return 0;
}
