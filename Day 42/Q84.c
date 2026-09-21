#include <stdio.h>

int main(void)
{
    char string[100];
    int i = 0;

    printf("Enter a lowercase string: ");
    scanf(" %99[^\n]", string);

    while (string[i] != '\0')
    {
        if (string[i] >= 'a' && string[i] <= 'z')
        {
            string[i] = string[i] - ('a' - 'A');
        }

        i++;
    }

    printf("Uppercase string = %s\n", string);

    return 0;
}
