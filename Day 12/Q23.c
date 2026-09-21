#include <stdio.h>

int main(void)
{
    int lateDays;
    float fine;

    printf("Enter the number of late days: ");
    scanf("%d", &lateDays);

    if (lateDays < 0)
    {
        printf("Invalid number of days.\n");
    }
    else if (lateDays == 0)
    {
        printf("No fine.\n");
    }
    else if (lateDays <= 5)
    {
        fine = lateDays * 2.0f;
        printf("Library fine = Rs. %.2f\n", fine);
    }
    else if (lateDays <= 10)
    {
        fine = (5 * 2.0f) + ((lateDays - 5) * 4.0f);
        printf("Library fine = Rs. %.2f\n", fine);
    }
    else if (lateDays <= 30)
    {
        fine = (5 * 2.0f) + (5 * 4.0f)
               + ((lateDays - 10) * 6.0f);

        printf("Library fine = Rs. %.2f\n", fine);
    }
    else
    {
        printf("Membership cancelled.\n");
    }
}
