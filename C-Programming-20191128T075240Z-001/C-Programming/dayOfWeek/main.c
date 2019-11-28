#include <stdio.h>

int main()
{
    int year,Julian_day,fours,hundreds,four_hundreds,day_of_the_week;
   printf("Enter the year(all four digits): ");
   scanf("%d",&year);
   printf("Enter Julian Day: ");
   scanf("%d",&Julian_day);
   fours=(year-1)/4;
   hundreds=(year-1)/100;
   four_hundreds=(year-1)/400;
   day_of_the_week=(year+Julian_day+fours-hundreds+four_hundreds)%7;
   printf("The day of the week is: %d\n",day_of_the_week);
 return 0;
}
