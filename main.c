#include <stdio.h>

int main()
{

    // main branch 08
    int units;

    printf("Enter number of units: ");
    scanf("%d", &units);

    if (units < 200)
    {
        printf("You pay %.2lf for %d units (.5)\n", units * 0.5, units);
    }
    else
    {
        printf("You pay %.2lf for %d units (.75)\n", units * 0.75, units);
    }

    return 0;
}