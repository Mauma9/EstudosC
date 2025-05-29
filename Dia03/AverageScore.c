#include <stdio.h>
int main(void)
{
    //Variables
    double score1 = 0;
    double score2 = 0;
    double score3 = 0;
    double score4 = 0;
    double score5 = 0;
    double averageScore = 0;

    //Data entry
    printf("What is the score number 1?");
    scanf("%lf", &score1);

    printf("What is the score number 2?");
        scanf("%lf", &score2);

    printf("What is the score number 3?");
        scanf("%lf", &score3);

    printf("What is the score number 4?");
        scanf("%lf", &score4);

    printf("What is the score number 5?");
        scanf("%lf", &score5);

    //Data processing
    averageScore = ((score1 + score2 + score3 + score4 + score5)/5);

    //Output
    printf("%lf\n", averageScore);
    if(averageScore >= 5){
        printf("Aprooved");
    } else{
        printf("Denied");
    }
    return 0;
}