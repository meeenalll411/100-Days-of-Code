#include <stdio.h>

int main(void)
{
    float units, bill;

    printf("Enter the number of units consumed: ");
    scanf("%f", &units);

    if (units < 0)
    {
        printf("Invalid number of units.\n");
    }
    else if (units <= 100)
    {
        bill = units * 5.0f;
        printf("Electricity bill = Rs. %.2f\n", bill);
    }
    else if (units <= 200)
    {
        bill = (100 * 5.0f) + ((units - 100) * 7.0f);
        printf("Electricity bill = Rs. %.2f\n", bill);
    }
    else if (units <= 300)
    {
        bill = (100 * 5.0f) + (100 * 7.0f)
               + ((units - 200) * 10.0f);

        printf("Electricity bill = Rs. %.2f\n", bill);
    }
    else
    {
        bill = (100 * 5.0f) + (100 * 7.0f)
               + (100 * 10.0f) + ((units - 300) * 12.0f);

        printf("Electricity bill = Rs. %.2f\n", bill);
    }
}
