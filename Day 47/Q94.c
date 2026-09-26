#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[200];
    char longest[100] = "";
    char word[100];
    int i = 0, j = 0;
    int maxLength = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    while (1)
    {
        if (sentence[i] != ' ' &&
            sentence[i] != '\n' &&
            sentence[i] != '\0')
        {
            word[j++] = sentence[i];
        }
        else
        {
            word[j] = '\0';

            if (j > maxLength)
            {
                maxLength = j;
                strcpy(longest, word);
            }

            j = 0;

            if (sentence[i] == '\0')
                break;
        }

        i++;
    }

    printf("Longest word: %s\n", longest);

    return 0;
}
