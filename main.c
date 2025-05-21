#include <stdio.h>

int main()
{

    // main branch 02

    int employees_years;
    float basic_salary;
    double final_salary;

    printf("Employee's years of service: ");
    scanf("%d", &employees_years);

    printf("Employee's basic salary: ");
    scanf("%f", &basic_salary);

    if (employees_years > 5)
    {
        final_salary = (double)basic_salary + (double)basic_salary * .05;
        printf("Employee has a bonus. Full amount: %.2lf\n", final_salary);
    }
    else
    {
        printf("Employee does not qualify for a bonus \n");
    }

    return 0;
}