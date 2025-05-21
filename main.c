#include <stdio.h>

int main()
{

    // main branch 05
    int working_hours;
    double hourly_rate;
    double total_amount;

    printf("Enter hourly rate: ");
    scanf("%lf", &hourly_rate);

    printf("Enter working hours: ");
    scanf("%d", &working_hours);

    if (working_hours > 40)
    {
        // > 40 --> .5+
        total_amount = working_hours * .5 + working_hours;
        printf("(qualified for overtime pay) total salary:%.2lf \n ", total_amount);
    }
    else
    {
        printf("total salary:%.2lf you do not qualify. \n ", working_hours * hourly_rate);
    }

    return 0;
}