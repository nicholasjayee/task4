#include <stdio.h>

int main()
{

    // main branch 04
    double purchase_amount;
    double total_payable_amount;

    printf("Enter purchase amount: ");
    scanf("%lf", &purchase_amount);

    if (purchase_amount < 500)
    {
        // 0.05
        total_payable_amount = purchase_amount + purchase_amount * 0.05;
    }
    else if (purchase_amount >= 500)
    {
        // 0.08
        total_payable_amount = purchase_amount + purchase_amount * 0.05;
    }

    printf("The total payable amount is %.3lf \n", total_payable_amount);

    return 0;
}