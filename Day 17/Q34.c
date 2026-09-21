#include <stdio.h>

int main(void)
{
    int number, i;
    int isPrime = 1;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number <= 1)
    {
        isPrime = 0;
    }
    else
    {
        for (i = 2; i <= number / i; i++)
        {
            if (number % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime == 1)
    {
        printf("%d is a prime number.\n", number);
    }
    else
    {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
