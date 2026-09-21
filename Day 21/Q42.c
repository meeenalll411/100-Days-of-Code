#include <stdio.h>

int main(void)
{
    int number, i;
    int sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number <= 0)
    {
        printf("Please enter a positive integer.\n");
    }
    else
    {
        for (i = 1; i <= number / 2; i++)
        {
            if (number % i == 0)
            {
                sum = sum + i;
            }
        }

        if (sum == number)
        {
            printf("%d is a perfect number.\n", number);
        }
        else
        {
            printf("%d is not a perfect number.\n", number);
        }
    }

    return 0;
}
