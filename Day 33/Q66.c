#include <stdio.h>

int main(void)
{
    int array[100];
    int size, i, element;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    if (size <= 0 || size >= 100)
    {
        printf("Invalid array size. Enter a value from 1 to 99.\n");
    }
    else
    {
        printf("Enter %d elements in ascending order:\n", size);

        for (i = 0; i < size; i++)
        {
            scanf("%d", &array[i]);
        }

        printf("Enter the element to insert: ");
        scanf("%d", &element);

        i = size - 1;

        while (i >= 0 && array[i] > element)
        {
            array[i + 1] = array[i];
            i--;
        }

        array[i + 1] = element;
        size++;

        printf("Array after insertion:\n");

        for (i = 0; i < size; i++)
        {
            printf("%d ", array[i]);
        }

        printf("\n");
    }

    return 0;
}
