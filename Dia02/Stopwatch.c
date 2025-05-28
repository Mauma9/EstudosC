#include <stdio.h>

int main(void)
{
    //Variable
    int hour = 0;
    int minute = 0;
    int second = 0;
    int total = 0;

    //Data entry
    printf("How many hours?\n");
    scanf("%d", &hour);

    printf("How many minutes?\n");
    scanf("%d", &minute);

    printf("How many seconds?\n");
    scanf("%d", &second);

    //Data processing
   total = (hour * 3600) + (minute * 60) + second;
    //Output
    printf("The total amount of seconds %d\n", total);
    return 0;
}