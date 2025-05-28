#include <stdio.h>
#include <math.h>

int main(void)
{
    //Variables
    double ratio = 0;
    double volume = 0;

    //Data Entry
     printf("What the ratio of the sphere?\n");
    scanf("%lf", &ratio);

    //Data Processing
    volume = (4.0/3.0) * 3.1415 * pow(ratio, 3);

    //Output
    printf("The volume of the sphere is %lf\n", volume);
    
    return 0;
}