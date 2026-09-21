#include <stdio.h>

int main(void)
{
    int array[100];
    int size, element;
    int i, position = -1;

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

        printf("Enter the element to delete: ");
        scanf("%d", &element);

        for (i = 0; i < size; i++)
        {
            if (array[i] == element)
            {
                position = i;
                break;
            }
        }

        if (position == -1)
        {
            printf("%d was not found in the array.\n", element);
        }
        else
        {
            for (i = position; i < size - 1; i++)
            {
                array[i] = array[i + 1];
            }

            size--;

            printf("Array after deletion:\n");

            for (i = 0; i < size; i++)
            {
                printf("%d ", array[i]);
            }

            printf("\n");
        }
    }

    return 0;
}
