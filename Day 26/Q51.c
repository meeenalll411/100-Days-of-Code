#include <stdio.h>

int main(void)
{
    int row, space, number;

    for (row = 1; row <= 5; row++)
    {
        for (space = 1; space <= 5 - row; space++)
        {
            printf(" ");
        }

        for (number = 6 - row; number <= 5; number++)
        {
            printf("%d", number);
        }

        printf("\n");
    }

    return 0;
}
