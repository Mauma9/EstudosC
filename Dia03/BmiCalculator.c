#include <stdio.h>
#include <math.h>

int main(void)
{
    //Variables
    double mass = 0;
    double heigth = 0;
    double bmi = 0;
    
    //Data entry
     printf("What is your mass?");
    scanf("%lf", &mass);

    printf("What is your heigth?");
    scanf("%lf", &heigth);
    //Data processing
    bmi = (mass / pow(heigth,2));

    //output
    printf("%lf\n", bmi);

    if(bmi < 18.5) {
					printf("Below normal weight");
				} else if (bmi >= 18.5 && bmi < 24.9) {
					printf("Normal weigth");
				} else if (bmi >= 25 && bmi < 29.9) {
					printf("Above normal weigth");
				} else if (bmi >= 30 && bmi < 34.9) {
					printf("Overweight");
				} else if (bmi >= 30 && bmi < 34.9) {
					printf("Obesity Nvl 1");
				}  else if (bmi >= 35 && bmi < 39.9) {
					printf("Obesity Nvl 2");
				} else if (bmi > 40) {
					printf("Obesity Nvl 3");
				}
    return 0;
}