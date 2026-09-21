#include <stdio.h>

int main(void)
{
    int number, i;

    printf("Enter the value of n: ");
    scanf("%d", &number);

    if (number < 1)
    {
        printf("Please enter a positive integer.\n");
    }
    else
    {
        printf("Numbers from 1 to %d are:\n", number);

        for (i = 1; i <= number; i++)
        {
            printf("%d ", i);
        }

        printf("\n");
    }
}
