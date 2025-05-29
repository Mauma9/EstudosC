#include <stdio.h>
int main(void)
{
    //Variables
    double distance = 0;
    double time = 0;
    double consume = 0;
    double averageSpeed = 0;
    double fuelEconomy = 0;

    //Data entry
    printf("What is the distance traveled?");
    scanf("%lf", &distance);

    printf("How long did it last?");
    scanf("%lf", &time);

    printf("What is the average consumption of the car?");
    scanf("%lf", &consume);

    //Data processing
    averageSpeed = (distance / time);
    fuelEconomy = (distance / consume);

    //Output
    printf("Your average speed was %lf %s\n", averageSpeed, "km/h");
    printf("Your fuel autonomy was %lf %s\n", fuelEconomy, "km");
    return 0;
}