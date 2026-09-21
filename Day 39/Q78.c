#include <stdio.h>

int main(void)
{
    int matrix[10][10];
    int size;
    int i, j;
    long long sum = 0;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    if (size <= 0 || size > 10)
    {
        printf("Invalid matrix size. Enter a value from 1 to 10.\n");
    }
    else
    {
        printf("Enter the matrix elements:\n");

        for (i = 0; i < size; i++)
        {
            for (j = 0; j < size; j++)
            {
                scanf("%d", &matrix[i][j]);
            }
        }

        for (i = 0; i < size; i++)
        {
            sum = sum + matrix[i][i];
        }

        printf("Sum of main diagonal elements = %lld\n", sum);
    }

    return 0;
}
