#include <stdio.h>

int main(void)
{
    long long binaryNumber;
    long long temporaryNumber;
    long long divisor = 1;
    int digit;
    int isValid = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binaryNumber);

    if (binaryNumber < 0)
    {
        printf("Invalid binary number.\n");
        return 0;
    }

    temporaryNumber = binaryNumber;

    do
    {
        digit = temporaryNumber % 10;

        if (digit != 0 && digit != 1)
        {
            isValid = 0;
            break;
        }

        temporaryNumber = temporaryNumber / 10;

    } while (temporaryNumber != 0);

    if (isValid == 0)
    {
        printf("Invalid binary number. Use only 0 and 1.\n");
    }
    else
    {
        while (binaryNumber / divisor >= 10)
        {
            divisor = divisor * 10;
        }

        printf("1's complement = ");

        while (divisor > 0)
        {
            digit = (binaryNumber / divisor) % 10;

            if (digit == 0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }

            divisor = divisor / 10;
        }

        printf("\n");
    }

    return 0;
}
