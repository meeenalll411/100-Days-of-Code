#include <stdio.h>

int main(void)
{
    int row, number;

    for (row = 1; row <= 5; row++)
    {
        for (number = 6 - row; number <= 5; number++)
        {
            printf("%d", number);
        }

        printf("\n");
    }

    return 0;
}
