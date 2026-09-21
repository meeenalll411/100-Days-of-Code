#include <stdio.h>

int main(void)
{
    int firstMatrix[10][10];
    int secondMatrix[10][10];
    int productMatrix[10][10] = {0};

    int firstRows, firstColumns;
    int secondRows, secondColumns;
    int i, j, k;

    printf("Enter rows and columns of the first matrix: ");
    scanf("%d %d", &firstRows, &firstColumns);

    printf("Enter rows and columns of the second matrix: ");
    scanf("%d %d", &secondRows, &secondColumns);

    if (firstRows <= 0 || firstRows > 10 ||
        firstColumns <= 0 || firstColumns > 10 ||
        secondRows <= 0 || secondRows > 10 ||
        secondColumns <= 0 || secondColumns > 10)
    {
        printf("Invalid matrix size. Maximum size is 10 x 10.\n");
    }
    else if (firstColumns != secondRows)
    {
        printf("Matrix multiplication is not possible.\n");
    }
    else
    {
        printf("Enter the elements of the first matrix:\n");

        for (i = 0; i < firstRows; i++)
        {
            for (j = 0; j < firstColumns; j++)
            {
                scanf("%d", &firstMatrix[i][j]);
            }
        }

        printf("Enter the elements of the second matrix:\n");

        for (i = 0; i < secondRows; i++)
        {
            for (j = 0; j < secondColumns; j++)
            {
                scanf("%d", &secondMatrix[i][j]);
            }
        }

        for (i = 0; i < firstRows; i++)
        {
            for (j = 0; j < secondColumns; j++)
            {
                for (k = 0; k < firstColumns; k++)
                {
                    productMatrix[i][j] +=
                        firstMatrix[i][k] * secondMatrix[k][j];
                }
            }
        }

        printf("Product of the two matrices:\n");

        for (i = 0; i < firstRows; i++)
        {
            for (j = 0; j < secondColumns; j++)
            {
                printf("%d ", productMatrix[i][j]);
            }

            printf("\n");
        }
    }

    return 0;
}
