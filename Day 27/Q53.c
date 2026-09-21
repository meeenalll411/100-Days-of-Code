#include <stdio.h>

int main(void)
{
    int row, star;

    /* Upper half */
    for (row = 1; row <= 5; row++)
    {
        for (star = 1; star <= (2 * row) - 1; star++)
        {
            printf("*");
        }

        printf("\n");
    }

    /* Lower half */
    for (row = 4; row >= 1; row--)
    {
        for (star = 1; star <= (2 * row) - 1; star++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
