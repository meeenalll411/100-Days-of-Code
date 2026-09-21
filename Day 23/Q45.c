#include <stdio.h>

int main(void)
{
    int n, i;
    double numerator, denominator;
    double sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive integer.\n");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            numerator = 2.0 * i;
            denominator = (4.0 * i) - 1.0;

            sum = sum + (numerator / denominator);
        }

        printf("Sum of the series = %.2lf\n", sum);
    }

    return 0;
}
