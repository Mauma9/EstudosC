#include <stdio.h>

int main(void)
{
    //Variables
    int number1 = 0;
    int number2 = 0;
    int number3 = 0;
    int sum = 0;

    //Data entry
    printf("Type the firts number:");
    scanf("%d", &number1);

    printf("Type the second number:");
    scanf("%d", &number2);

    printf("Type the third number:");
    scanf("%d", &number3);
    //Data processing
    if(number1 > number2){
        int temporary = number1;
        number1 = number2;
        number2 = temporary;
    } if(number2 > number3){
        int temporary2 = number2;
        number2 = number3;
        number3 = temporary2;
    }
    sum = number1 + number2;
    
    //Output
    printf("%d", sum);
    return 0;
}
