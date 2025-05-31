#include <stdio.h>
int main(void)
{
    // Variables
    int position = 0;
    double salary = 0;
    double newSalary = 0;

    // Data entry
    printf("Type the position code: ");
    scanf("%d", &position);
    printf("Type your salary: ");
    scanf("%lf", &salary);

    //Data processing
    if (position == 1)
    {
        newSalary = (salary * 1.1);
    }
    else if (position == 2)
    {
        newSalary = (salary * 1.15);
    }
    else if (position == 3)
    {
        newSalary = (salary * 1.25);
    }
    else
        printf("Vati");

    //Output
    printf("Your new salary is: %lf\n", newSalary);
    return 0;
}
