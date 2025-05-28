#include <stdio.h>

int main(void)
{
    //Variables
    double salary = 0;
    double MinimalSalaryqtd =0;

    //Data entry
    printf("how much is your salary?\n");
    scanf("%lf", &salary);

    //Data processing
    MinimalSalaryqtd = (salary / 1518);

    //Output
    printf("The amount of minimal salarys that you recive is: %lf %s", MinimalSalaryqtd, "minimal salarys");
    return 0;
}
