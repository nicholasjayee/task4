#include <stdio.h>

int main()
{

    // main branch 09
    int quantity;

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    if (quantity >= 10)
    {
        printf("You qualify for a 15%% (0.15) discount \n");
    }
    else
    {
        printf("You qualify do not qualify for a discount \n");
    }

    return 0;
}