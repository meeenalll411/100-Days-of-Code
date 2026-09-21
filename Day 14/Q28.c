#include <stdio.h>

int main(void)
{
    int n, i;
    long long product = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("There are no even numbers from 1 to %d.\n", n);
    }
    else
    {
        for (i = 2; i <= n; i = i + 2)
        {
            product = product * i;
        }

        printf("Product of even numbers from 1 to %d = %lld\n",
               n, product);
    }

}
