#include <stdio.h>

int main(void)
{
    int array[100];
    int size, i;
    int largest, secondLargest;
    int largestFound = 0;
    int secondLargestFound = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    if (size < 2 || size > 100)
    {
        printf("Invalid array size. Enter a value from 2 to 100.\n");
    }
    else
    {
        printf("Enter %d elements:\n", size);

        for (i = 0; i < size; i++)
        {
            scanf("%d", &array[i]);

            if (!largestFound || array[i] > largest)
            {
                if (largestFound)
                {
                    secondLargest = largest;
                    secondLargestFound = 1;
                }

                largest = array[i];
                largestFound = 1;
            }
            else if (array[i] < largest &&
                     (!secondLargestFound ||
                      array[i] > secondLargest))
            {
                secondLargest = array[i];
                secondLargestFound = 1;
            }
        }

        if (secondLargestFound)
        {
            printf("Second-largest element = %d\n", secondLargest);
        }
        else
        {
            printf("There is no distinct second-largest element.\n");
        }
    }

    return 0;
}
