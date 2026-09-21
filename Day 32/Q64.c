#include <stdio.h>

int main(void)
{
    long long number;
    int frequency[10] = {0};
    int digit, i;
    int mostFrequentDigit = 0;
    int highestFrequency = 0;

    printf("Enter an integer number: ");
    scanf("%lld", &number);

    if (number < 0)
    {
        number = -number;
    }

    if (number == 0)
    {
        frequency[0] = 1;
    }
    else
    {
        while (number != 0)
        {
            digit = number % 10;
            frequency[digit]++;
            number = number / 10;
        }
    }

    for (i = 0; i <= 9; i++)
    {
        if (frequency[i] > highestFrequency)
        {
            highestFrequency = frequency[i];
            mostFrequentDigit = i;
        }
    }

    printf("Most frequently occurring digit = %d\n",
           mostFrequentDigit);

    printf("It occurs %d time(s).\n", highestFrequency);

    return 0;
}
