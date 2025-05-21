#include <stdio.h>

int main()
{

    // main branch 07
    double withdraw_amount;

    printf("Enter withdraw amount: ");
    scanf("%lf", &withdraw_amount);

    if (withdraw_amount < 500)
    {
        printf("You have a 10 off withdraw charge \n");
    }
    else
    {
        printf("you do not have a withdraw charge \n");
    }

    return 0;
}