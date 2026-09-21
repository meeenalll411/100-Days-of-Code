#include <stdio.h>

int main(void)
{
    int firstMatrix[10][10];
    int secondMatrix[10][10];
    int sumMatrix[10][10];
    int rows, columns;
    int i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    if (rows <= 0 || rows > 10 ||
        columns <= 0 || columns > 10)
    {
        printf("Invalid matrix size. Maximum size is 10 x 10.\n");
    }
    else
    {
        printf("Enter the elements of the first matrix:\n");

        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < columns; j++)
            {
                scanf("%d", &firstMatrix[i][j]);
            }
        }

        printf("Enter the elements of the second matrix:\n");

        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < columns; j++)
            {
                scanf("%d", &secondMatrix[i][j]);
            }
        }

        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < columns; j++)
            {
                sumMatrix[i][j] =
                    firstMatrix[i][j] + secondMatrix[i][j];
            }
        }

        printf("Sum of the two matrices:\n");

        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < columns; j++)
            {
                printf("%d ", sumMatrix[i][j]);
            }

            printf("\n");
        }
    }

    return 0;
}
