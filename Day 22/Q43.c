#include <stdio.h>

int main(void)
{
    int number, originalNumber;
    int digit, i;
    int factorial;
    int sum = 0;

    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("Please enter a non-negative integer.\n");
    }
    else
    {
        originalNumber = number;

        do
        {
            digit = number % 10;
            factorial = 1;

            for (i = 1; i <= digit; i++)
            {
                factorial = factorial * i;
            }

            sum = sum + factorial;
            number = number / 10;

        } while (number != 0);

        if (sum == originalNumber)
        {
            printf("%d is a Strong number.\n", originalNumber);
        }
        else
        {
            printf("%d is not a Strong number.\n", originalNumber);
        }
    }

    return 0;
}
