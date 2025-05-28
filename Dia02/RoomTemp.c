#include <stdio.h>

int main(void)
{
    //Variables
    double tempC = 0;
    double tempF = 0;

    //Data entry
    printf("What the room temperature in C?\n");
    scanf("%lf", &tempC);

    //Data processing
    tempF = ((tempC / 5)*9) + 32;

    //Output
    printf("The room temperature in F is: %lf\n", tempF);
    return 0;
}
