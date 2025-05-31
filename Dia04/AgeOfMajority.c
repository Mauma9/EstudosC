#include <stdio.h>

int main(void)
{
    //Variables
    int age = 0;

    //Data entry
    printf("Type your age: ");
    scanf("%d", &age);

    //Data processing
    if(age >= 21){
        printf("Age of majority");
    } else {
        printf("Minor");
    }
    return 0;
}
