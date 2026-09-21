#include <stdio.h>

int main(void)
{
    int matrix[10][10];
    int rows, columns;
    int i, j;
    long long sum = 0;

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
                sum = sum + matrix[i][j];
            }
        }

        printf("Sum of all matrix elements = %lld\n", sum);
    }

    return 0;
}
