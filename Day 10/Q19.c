#include <stdio.h>

int main(void)
{
    float side1, side2, side3;

    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    if (side1 <= 0 || side2 <= 0 || side3 <= 0)
    {
        printf("Invalid side lengths.\n");
    }
    else if (side1 + side2 <= side3 ||
             side1 + side3 <= side2 ||
             side2 + side3 <= side1)
    {
        printf("The given sides do not form a triangle.\n");
    }
    else if (side1 == side2 && side2 == side3)
    {
        printf("The triangle is Equilateral.\n");
    }
    else if (side1 == side2 || side1 == side3 || side2 == side3)
    {
        printf("The triangle is Isosceles.\n");
    }
    else
    {
        printf("The triangle is Scalene.\n");
    }
}
