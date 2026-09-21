#include <stdio.h>

int main(void)
{
    int row, space, star;

    for (row = 1; row <= 5; row++)
    {
        for (space = 1; space < row; space++)
        {
            printf(" ");
        }

        for (star = row; star <= 5; star++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
