#include <stdio.h>

int main(void)
{
    //Variables
    double number = 0;
    double attempt = 0;
    //Data entry
    scanf("%lf", &number);
    scanf("%lf", &attempt);
    //Data processing
    for(int i = 0 ; i < 100 ; i++){
        attempt = (attempt + number / attempt) / 2.0;
        printf("%lf\n", attempt);
    }
    //Output
    return 0;
}
