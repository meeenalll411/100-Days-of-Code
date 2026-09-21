#include <stdio.h>

int main(void)
{
    long long number;
    int digit;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%lld", &number);

    if (number < 0)
    {
        number = -number;
    }

    while (number != 0)
    {
        digit = number % 10;
        sum = sum + digit;
        number = number / 10;
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
