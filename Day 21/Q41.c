#include <stdio.h>

int main(void)
{
    long long number, firstDigit, lastDigit;
    long long middleDigits, divisor = 1;
    long long swappedNumber;

    printf("Enter a positive number: ");
    scanf("%lld", &number);

    if (number < 0)
    {
        printf("Please enter a positive number.\n");
    }
    else if (number < 10)
    {
        printf("Number after swapping = %lld\n", number);
    }
    else
    {
        lastDigit = number % 10;

        while (number / divisor >= 10)
        {
            divisor = divisor * 10;
        }

        firstDigit = number / divisor;
        middleDigits = (number % divisor) / 10;

        swappedNumber = (lastDigit * divisor)
                        + (middleDigits * 10)
                        + firstDigit;

        printf("Number after swapping = %lld\n", swappedNumber);
    }

    return 0;
}
