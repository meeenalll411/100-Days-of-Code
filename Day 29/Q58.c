#include <stdio.h>

int main(void)
{
    int array[100];
    int size, i;
    int maximum, minimum;

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

        maximum = array[0];
        minimum = array[0];

        for (i = 1; i < size; i++)
        {
            if (array[i] > maximum)
            {
                maximum = array[i];
            }

            if (array[i] < minimum)
            {
                minimum = array[i];
            }
        }

        printf("Maximum element = %d\n", maximum);
        printf("Minimum element = %d\n", minimum);
    }

    return 0;
}
