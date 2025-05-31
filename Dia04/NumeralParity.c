#include <stdio.h>

int main(void)
{
    //Variables
    int number = 0;

    //Data entry
    printf("Type the number:\n");
    scanf("%d", &number);

    //Output
    if(number == 0 ){
        printf("Zero\n");
    } else if((number % 2) == 0){
        printf("Even\n");
    }else{
        printf("Odd\n");
    }
    return 0;
}