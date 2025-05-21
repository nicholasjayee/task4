#include <stdio.h>

int main()
{

    // main branch 06

    double cost_price;
    double selling_price;

    printf("Enter cost price: ");
    scanf("%lf", &cost_price);

    printf("Enter selling price: ");
    scanf("%lf", &selling_price);

    if (selling_price > cost_price)
    {
        printf("A profit of %.2lf was made \n", selling_price - cost_price);
    }
    else
    {
        printf("A loss of %.2lf was made \n", cost_price - selling_price);
    }

    return 0;
}