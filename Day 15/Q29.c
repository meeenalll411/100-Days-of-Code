#include <stdio.h>

int main(void)
{
    int number, i;
    unsigned long long factorial = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else if (number > 20)
    {
        printf("Number is too large to calculate accurately.\n");
    }
    else
    {
        for (i = 1; i <= number; i++)
        {
            factorial = factorial * i;
        }

        printf("Factorial of %d = %llu\n", number, factorial);
    }

}
