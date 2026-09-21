#include <stdio.h>

int main(void)
{
    char string[100];
    int length = 0;

    printf("Enter a string: ");
    scanf(" %99[^\n]", string);

    while (string[length] != '\0')
    {
        length++;
    }

    printf("Number of characters = %d\n", length);

    return 0;
}
