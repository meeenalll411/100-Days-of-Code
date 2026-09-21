#include <stdio.h>

int main(void)
{
    int firstArray[100], secondArray[100];
    int mergedArray[200];
    int firstSize, secondSize;
    int i, mergedSize;

    printf("Enter the size of the first array: ");
    scanf("%d", &firstSize);

    printf("Enter the size of the second array: ");
    scanf("%d", &secondSize);

    if (firstSize <= 0 || firstSize > 100 ||
        secondSize <= 0 || secondSize > 100)
    {
        printf("Invalid array size.\n");
    }
    else
    {
        printf("Enter %d elements of the first array:\n", firstSize);

        for (i = 0; i < firstSize; i++)
        {
            scanf("%d", &firstArray[i]);
            mergedArray[i] = firstArray[i];
        }

        printf("Enter %d elements of the second array:\n", secondSize);

        for (i = 0; i < secondSize; i++)
        {
            scanf("%d", &secondArray[i]);
            mergedArray[firstSize + i] = secondArray[i];
        }

        mergedSize = firstSize + secondSize;

        printf("Merged array:\n");

        for (i = 0; i < mergedSize; i++)
        {
            printf("%d ", mergedArray[i]);
        }

        printf("\n");
    }

    return 0;
}
