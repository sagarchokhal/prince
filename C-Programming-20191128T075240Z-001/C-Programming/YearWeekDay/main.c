#include <stdio.h>

int main()
{
    int daysToConvert;
    int year,week,days;
    printf("enter the number of days: ");
    scanf("%d",&daysToConvert);
    year=daysToConvert/365;
    week=(daysToConvert%365)/7;
    days=(daysToConvert-(year*365+week*7));
    printf("%d days equals %d year , %d week and %d days.\n",daysToConvert,year,week,days);
    return 0;
}
