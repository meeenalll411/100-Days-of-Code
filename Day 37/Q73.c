#include <stdio.h>

int main(void)
{
    int matrix[10][10];
    int rowSum[10] = {0};
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
                rowSum[i] = rowSum[i] + matrix[i][j];
            }
        }

        printf("Sum of each row:\n");

        for (i = 0; i < rows; i++)
        {
            printf("Row %d sum = %d\n", i + 1, rowSum[i]);
        }
    }

    return 0;
}
