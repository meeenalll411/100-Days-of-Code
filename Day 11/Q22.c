#include <stdio.h>

int main(void)
{
    float costPrice, sellingPrice;
    float amount, percentage;

    printf("Enter cost price: ");
    scanf("%f", &costPrice);

    printf("Enter selling price: ");
    scanf("%f", &sellingPrice);

    if (costPrice <= 0 || sellingPrice < 0)
    {
        printf("Invalid price entered.\n");
    }
    else if (sellingPrice > costPrice)
    {
        amount = sellingPrice - costPrice;
        percentage = (amount / costPrice) * 100;

        printf("Profit = %.2f\n", amount);
        printf("Profit Percentage = %.2f%%\n", percentage);
    }
    else if (sellingPrice < costPrice)
    {
        amount = costPrice - sellingPrice;
        percentage = (amount / costPrice) * 100;

        printf("Loss = %.2f\n", amount);
        printf("Loss Percentage = %.2f%%\n", percentage);
    }
    else
    {
        printf("No profit and no loss.\n");
    }
}
