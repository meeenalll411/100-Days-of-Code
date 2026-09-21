#include <stdio.h>

int main(void)
{
    int array[100];
    int size, i;
    int temporary;

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

        for (i = 0; i < size / 2; i++)
        {
            temporary = array[i];
            array[i] = array[size - 1 - i];
            array[size - 1 - i] = temporary;
        }

        printf("Reversed array:\n");

        for (i = 0; i < size; i++)
        {
            printf("%d ", array[i]);
        }

        printf("\n");
    }

    return 0;
}
