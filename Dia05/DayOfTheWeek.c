#include <stdio.h>

int main(void)
{
    // Variables
    int day = 0;
    int month = 0;
    int year = 0;
    int weekDay = 0;

    // Data entry
    printf("type the day: ");
    scanf("%d", &day);

    printf("type the month: ");
    scanf("%d", &month);

    printf("type the year: ");
    scanf("%d", &year);

    // Data processing
    weekDay = (((day) + (2 * month) +
                ((3 * (month + 1)) / 5) +
                ((year) + (year / 4)) -
                (year / 100) + (year / 400) + 2) %
               7);

    // Output
    if (weekDay == 0)
    {
        printf("Saturday");
    }
    else if (weekDay == 1)
    {
        printf("Sunday");
    }
    else if (weekDay == 2)
    {
        printf("Monday");
    }else if (weekDay == 3)
    {
        printf("Tuesday");
    }else if (weekDay == 4)
    {
        printf("Wednesday");
    }else if (weekDay == 5)
    {
        printf("Thursday");
    }else if (weekDay == 6)
    {
        printf("Friday");
    }

    return 0;
}