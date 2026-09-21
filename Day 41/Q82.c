#include <stdio.h>

int main(void)
{
    char string[100];
    int i = 0;

    printf("Enter a string: ");
    scanf(" %99[^\n]", string);

    printf("Characters of the string:\n");

    while (string[i] != '\0')
    {
        printf("%c\n", string[i]);
        i++;
    }

    return 0;
}
