#include <stdio.h>

int main(void)
{
    int n, number, divisor;
    int isPrime;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("There are no prime numbers from 1 to %d.\n", n);
    }
    else
    {
        printf("Prime numbers from 1 to %d are:\n", n);

        for (number = 2; number <= n; number++)
        {
            isPrime = 1;

            for (divisor = 2;
                 divisor <= number / divisor;
                 divisor++)
            {
                if (number % divisor == 0)
                {
                    isPrime = 0;
                    break;
                }
            }

            if (isPrime == 1)
            {
                printf("%d ", number);
            }
        }

        printf("\n");
    }

    return 0;
}
