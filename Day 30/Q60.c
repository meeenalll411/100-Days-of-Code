#include <stdio.h>

int main(void)
{
    int array[100];
    int size, i;
    int positiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    if (size <= 0 || size > 100)
    {
        printf("Invalid array size. Enter a value from 1 to 100.\n");
    }
    else
    {
        printf("Enter %d elements:\n", size);

        for (i = 0; i < size; i++)
        {
            scanf("%d", &array[i]);

            if (array[i] > 0)
            {
                positiveCount++;
            }
            else if (array[i] < 0)
            {
                negativeCount++;
            }
            else
            {
                zeroCount++;
            }
        }

        printf("Number of positive elements = %d\n", positiveCount);
        printf("Number of negative elements = %d\n", negativeCount);
        printf("Number of zero elements = %d\n", zeroCount);
    }

    return 0;
}
