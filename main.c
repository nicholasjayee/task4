#include <stdio.h>

int main()
{

    // main branch 01
    float total_amount, discount_rate = .1;
    double computed_amount;

    printf("Enter total purchase amount: ");
    scanf("%f", &total_amount);

    if (total_amount > 1000)
    {
        computed_amount = (double)total_amount - (double)(discount_rate * total_amount);

        printf("You've got your self a discount of %.2f \n you are paying:%.2lf \n", discount_rate, computed_amount);
    }
    else
    {
        printf("To have a %.2f discount you must have a total above 1000. \n you are paying: %.2f\n", discount_rate, total_amount);
    }

    return 0;
}