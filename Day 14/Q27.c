#include <stdio.h>

int main(void)
{
    int n, i;
    int oddNumber = 1;
    int sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive integer.\n");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            sum = sum + oddNumber;
            oddNumber = oddNumber + 2;
        }

        printf("Sum of the first %d odd numbers = %d\n", n, sum);
    }

}
