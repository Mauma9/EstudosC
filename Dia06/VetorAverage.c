#include <stdio.h>

int main(void)
{
    //Variables
    double number[4];
    double sum = 0;
    double average = 0;
    int aboveAverage = 0;
    //Data entry
    for (int i = 0; i < 4; i++)
    {
        printf("type a number: ");
        scanf("%lf", &number[i]);
        sum += number[i];
    }
    
    //Data processing
    average = (sum / 4.0);
     
    for(int i = 0 ; i < 4 ; i++){
        if(number[i] > average){
        aboveAverage++;
        }
    }

    //Output
    printf("The average is: %lf\n", average);
    printf("the quantity of numbers that is above the average is: %d\n", aboveAverage);
    return 0;
}
