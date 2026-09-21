#include <stdio.h>

int main(void)
{
    int matrix[10][10];
    int transpose[10][10];
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
        printf("Enter the matrix elements:\n");

        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < columns; j++)
            {
                scanf("%d", &matrix[i][j]);
            }
        }

        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < columns; j++)
            {
                transpose[j][i] = matrix[i][j];
            }
        }

        printf("Transpose of the matrix:\n");

        for (i = 0; i < columns; i++)
        {
            for (j = 0; j < rows; j++)
            {
                printf("%d ", transpose[i][j]);
            }

            printf("\n");
        }
    }

    return 0;
}
