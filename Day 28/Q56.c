#include <stdio.h>

int main(void)
{
    int array[100];
    int size, i;

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

        printf("Array elements are:\n");

        for (i = 0; i < size; i++)
        {
            printf("%d ", array[i]);
        }

        printf("\n");
    }

    return 0;
}
