#include <stdio.h>

int main(void)
{
    int array[100];
    int size, position, element;
    int i;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    if (size <= 0 || size >= 100)
    {
        printf("Invalid array size. Enter a value from 1 to 99.\n");
    }
    else
    {
        printf("Enter %d elements:\n", size);

        for (i = 0; i < size; i++)
        {
            scanf("%d", &array[i]);
        }

        printf("Enter the element to insert: ");
        scanf("%d", &element);

        printf("Enter the position from 1 to %d: ", size + 1);
        scanf("%d", &position);

        if (position < 1 || position > size + 1)
        {
            printf("Invalid position.\n");
        }
        else
        {
            for (i = size; i >= position; i--)
            {
                array[i] = array[i - 1];
            }

            array[position - 1] = element;
            size++;

            printf("Array after insertion:\n");

            for (i = 0; i < size; i++)
            {
                printf("%d ", array[i]);
            }

            printf("\n");
        }
    }

    return 0;
}
