#include <stdio.h>

int main(void)
{
    int matrix[10][10];
    int rows, columns;
    int i, j, diagonal;

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

        printf("Diagonal traversal:\n");

        for (diagonal = 0;
             diagonal < rows + columns - 1;
             diagonal++)
        {
            if (diagonal % 2 == 0)
            {
                i = diagonal < rows ? diagonal : rows - 1;
                j = diagonal - i;

                while (i >= 0 && j < columns)
                {
                    printf("%d ", matrix[i][j]);
                    i--;
                    j++;
                }
            }
            else
            {
                j = diagonal < columns ? diagonal : columns - 1;
                i = diagonal - j;

                while (j >= 0 && i < rows)
                {
                    printf("%d ", matrix[i][j]);
                    i++;
                    j--;
                }
            }
        }

        printf("\n");
    }

    return 0;
}
