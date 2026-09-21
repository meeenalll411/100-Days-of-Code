#include <stdio.h>

int main(void)
{
    int array[100];
    int size, i;
    long long sum = 0;

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
            sum = sum + array[i];
        }

        printf("Sum of array elements = %lld\n", sum);
    }

    return 0;
}
