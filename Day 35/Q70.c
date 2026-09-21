#include <stdio.h>

int main(void)
{
    int array[100], rotatedArray[100];
    int size, k, i;
    int newPosition;

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
        }

        printf("Enter the number of right rotations: ");
        scanf("%d", &k);

        if (k < 0)
        {
            printf("Please enter a non-negative value of k.\n");
        }
        else
        {
            k = k % size;

            for (i = 0; i < size; i++)
            {
                newPosition = (i + k) % size;
                rotatedArray[newPosition] = array[i];
            }

            printf("Array after right rotation:\n");

            for (i = 0; i < size; i++)
            {
                printf("%d ", rotatedArray[i]);
            }

            printf("\n");
        }
    }

    return 0;
}
