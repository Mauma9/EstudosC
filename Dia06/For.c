#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //Variables
    int number[5];

    for(int i = 0 ; i < 5 ; i++){
        printf("type a number: ");
        scanf("%d", &number[i]);
    }
    for(int i = 0 ; i < 5 ; i++){
        if(number[i] > 0){
            printf("%d\n", number[i] * -1);
        } else  ("%d", number[i]);
    }
    return 0;
}