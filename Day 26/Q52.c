#include <stdio.h>

int main(void)
{
    int row, space, star;

    /* Upper half */
    for (row = 1; row <= 3; row++)
    {
        for (space = 1; space <= 3 - row; space++)
        {
            printf(" ");
        }

        for (star = 1; star <= (2 * row) - 1; star++)
        {
            printf("*");
        }

        printf("\n");
    }

    /* Lower half */
    for (row = 2; row >= 1; row--)
    {
        for (space = 1; space <= 3 - row; space++)
        {
            printf(" ");
        }

        for (star = 1; star <= (2 * row) - 1; star++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
