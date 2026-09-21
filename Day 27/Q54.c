#include <stdio.h>

int main(void)
{
    int row, space, star;

    /* Upper half */
    for (row = 1; row <= 4; row++)
    {
        for (space = 1; space <= 4 - row; space++)
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
    for (row = 3; row >= 1; row--)
    {
        for (space = 1; space <= 4 - row; space++)
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
