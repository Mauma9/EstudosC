#include <stdio.h>

int main(void)
{
    //Variables
    double grade1 = 0;
    double grade2 = 0;
    double grade3 = 0;
    double substutiveGrade = 0;

    //Data entry
    printf("Type the first score:\n");
    scanf("%lf", &grade1);

    printf("Type the second score:\n");
    scanf("%lf", &grade2);

    printf("Type the third score:\n");
    scanf("%lf", &grade3);

    //Data processing
    if((grade1 + grade2 + grade3) / 3 >= 5){
        printf("Aprooved");
    } else{
        printf("Type the substitutive score:\n");
    scanf("%lf", &substutiveGrade);
    if(substutiveGrade >= 5){
        printf("Aprooved");
    } else{
        printf("Denied");
    }
    }
    return 0;
}
