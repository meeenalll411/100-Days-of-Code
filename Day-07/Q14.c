#include <stdio.h>

int main(void)
{
    char character;

    printf("Enter an alphabet: ");
    scanf(" %c", &character);

    if (character == 'a' || character == 'e' ||
        character == 'i' || character == 'o' ||
        character == 'u' || character == 'A' ||
        character == 'E' || character == 'I' ||
        character == 'O' || character == 'U')
    {
        printf("%c is a vowel.\n", character);
    }
    else if ((character >= 'a' && character <= 'z') ||
             (character >= 'A' && character <= 'Z'))
    {
        printf("%c is a consonant.\n", character);
    }
    else
    {
        printf("The entered character is not an alphabet.\n");
    }
}
