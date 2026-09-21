#include <stdio.h>

int main(void)
{
    char string[100];
    int i = 0;
    int vowels = 0;
    int consonants = 0;
    char character;

    printf("Enter a string: ");
    scanf(" %99[^\n]", string);

    while (string[i] != '\0')
    {
        character = string[i];

        if ((character >= 'A' && character <= 'Z') ||
            (character >= 'a' && character <= 'z'))
        {
            if (character == 'a' || character == 'e' ||
                character == 'i' || character == 'o' ||
                character == 'u' || character == 'A' ||
                character == 'E' || character == 'I' ||
                character == 'O' || character == 'U')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }

        i++;
    }

    printf("Number of vowels = %d\n", vowels);
    printf("Number of consonants = %d\n", consonants);

    return 0;
}
