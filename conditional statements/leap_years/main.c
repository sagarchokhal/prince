#include <stdio.h>

int main()
{
    int years;
    printf("enter year:");
    scanf("%d",&years);
    if(years%4==0&&years%100!=0){
        printf("this is leap year.\n");

    }else if(years%400==0){
        printf("this is leap year.\n");

    }else{
        printf("this is not leap year.\n");
    }
    return 0;
}
