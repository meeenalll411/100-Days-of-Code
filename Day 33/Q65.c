#include <stdio.h>

int main(void)
{
    int array[100];
    int size, i, element;
    int left, right, middle;
    int position = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    if (size <= 0 || size > 100)
    {
        printf("Invalid array size. Enter a value from 1 to 100.\n");
    }
    else
    {
        printf("Enter %d elements in ascending order:\n", size);

        for (i = 0; i < size; i++)
        {
            scanf("%d", &array[i]);
        }

        printf("Enter the element to search: ");
        scanf("%d", &element);

        left = 0;
        right = size - 1;

        while (left <= right)
        {
            middle = left + (right - left) / 2;

            if (array[middle] == element)
            {
                position = middle;
                break;
            }
            else if (array[middle] < element)
            {
                left = middle + 1;
            }
            else
            {
                right = middle - 1;
            }
        }

        if (position != -1)
        {
            printf("%d found at position %d.\n",
                   element, position + 1);
        }
        else
        {
            printf("%d was not found in the array.\n", element);
        }
    }

    return 0;
}
