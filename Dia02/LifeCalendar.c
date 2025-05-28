#include <stdio.h>
#include <time.h>

int main(void)
{
    //Variables Birth
    int birthDay = 0;
    int birthMonth = 0;
    int birthYear = 0;
    

    //Variables Today
    time_t t = time(NULL);
    struct tm *today = localtime(&t);
    int todayDay = today -> tm_mday;
    int todayMonth = today -> tm_mon +1;
    int todayYear = today -> tm_year + 1900;

    //Data entry
    printf("What is your birth day?");
    scanf("%d", &birthDay);
    
    printf("What is your birth month?");
    scanf("%d", &birthMonth);

    printf("What is your birth year?");
    scanf("%d", &birthYear);

     //Variables Result / Data processing
    int resultDay = todayDay - birthDay;
    int resultMonth = todayMonth - birthMonth;
    int resultYear = todayYear - birthYear;

    //Tooning
    if(resultDay < 0){
        resultDay += 30;
        resultMonth--;
    }
    
    if (resultMonth < 0) {
        resultMonth += 12;
        resultYear--;
    }

    //Output
    printf("The diference is: %d years, %d months and %d days", resultYear, resultMonth, resultDay);

    return 0;
}
