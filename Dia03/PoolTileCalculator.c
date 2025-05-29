#include <stdio.h>
#include <math.h>

int main(void)
{
    //Variables
    double depth = 0;
    double length = 0;
    double heigth = 0;
    double tileLegth = 0;
    double tileHeigth = 0;
    double tileArea = 0;
    double tileQuantity = 0;
    double faceA = 0;
    double faceB = 0;
    double faceC = 0;

    //Data entry
    printf("What is length?");
    scanf("%lf", &length);

    printf("What is heigth?");
    scanf("%lf", &heigth);

    printf("What is depth?");
    scanf("%lf", &depth);

    printf("What is tile heigth?");
    scanf("%lf", &tileHeigth);

    printf("What is tile length?");
    scanf("%lf", &tileLegth);
    //Data proecssing
    tileArea = tileHeigth * tileLegth;

    faceA = heigth * length;
    faceB = heigth * depth;
    faceC = length * depth;

    tileQuantity = (((2*faceA) + (2*faceB) + faceC) / tileArea);

    //Output
    printf("the number of tiles needed for cover up the interior of the pool is: %lf\n", tileQuantity);
    return 0;
}