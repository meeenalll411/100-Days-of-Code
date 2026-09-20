#include <stdio.h>

int main(void)
{
    float percentage;

    printf("Enter percentage: ");
    scanf("%f", &percentage);

    if (percentage < 0 || percentage > 100)
    {
        printf("Invalid percentage. Enter a value from 0 to 100.\n");
    }
    else if (percentage >= 90)
    {
        printf("Grade A\n");
    }
    else if (percentage >= 80)
    {
        printf("Grade B\n");
    }
    else if (percentage >= 70)
    {
        printf("Grade C\n");
    }
    else if (percentage >= 60)
    {
        printf("Grade D\n");
    }
    else
    {
        printf("Grade F\n");
    }
}
