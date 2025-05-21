#include <stdio.h>

int main()
{

    // main branch 03
    double salary;
    int years;

    printf("Enter employee salary: ");
    scanf("%lf", &salary);

    printf("Enter working period: ");
    scanf("%d", &years);

    if (salary > 5000 || years >= 2)
    {
        printf("Eligible for a loan \n");
    }
    else
    {
        printf("Not eligible for a loan \n");
    }

    return 0;
}