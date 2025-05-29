#include <stdio.h>
int main(void)
{
        //Variables
        double candidate1 = 0;
		double candidate2 = 0;
		double candidate3 = 0;
		double blank = 0;
		double null = 0;
		double totalValid = 0;
		double total = 0;
		double percent1 = 0;
		double percent2 = 0;
		double percent3 = 0;
		double percentB = 0;
		double percentN = 0;

        //Data entry
        printf("What is the number of votes for the first candidate?");
        scanf("%lf", &candidate1);

        printf("What is the number of votes for the second candidate?");
        scanf("%lf", &candidate2);

        printf("What is the number of votes for the third candidate?");
        scanf("%lf", &candidate3);

        printf("What is the number of blank votes ?");
        scanf("%lf", &blank);

        printf("What is the number of null votes ?");
        scanf("%lf", &null);

        //Data Processing
        totalValid = candidate1 + candidate2 + candidate3;
        total = totalValid + blank + null;

        percent1 = ((candidate1 * 100)/ totalValid);
        percent2 = ((candidate2 * 100)/ totalValid);
        percent3 = ((candidate3 * 100)/ totalValid);
        percentB = ((blank  * 100)/ total);
        percentN = ((null * 100)/ total);

        //Output
        printf("percentuais validos");
        printf("%lf\n", percent1);
        printf("%lf\n", percent2);
        printf("%lf\n", percent3);
         printf("percentuais não validos");
          printf("%lf\n", percentB);
           printf("%lf\n", percentN);
    return 0;
}