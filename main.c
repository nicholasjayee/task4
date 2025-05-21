#include <stdio.h>

int main()
{

    // main branch 09
    int duration;

    printf("Enter membership duration: ");
    scanf("%d", &duration);

    if (duration >= 4)
    {
        printf("You qualify for a 10%% (0.1) discount \n");
    }
    else if (duration <= 3)
    {
        printf("You qualify for a 5%% (0.05) discount \n");
    }

    return 0;
}