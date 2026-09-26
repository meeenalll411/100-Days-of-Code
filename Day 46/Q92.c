#include <stdio.h>

int main()
{
    char str[100];
    int frequency[26] = {0};
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            frequency[str[i] - 'a']++;

            if (frequency[str[i] - 'a'] == 2)
            {
                printf("First repeating lowercase alphabet: %c\n", str[i]);
                return 0;
            }
        }
    }

    printf("No repeating lowercase alphabet found.\n");

    return 0;
}
