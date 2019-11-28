#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("Enter divident ");
    scanf("%d",&a);
    printf("enter divisor ");
    scanf("%d",&b);
    if (a%b==0){
        printf("%d is evenly divisible by %d.\n",a,b);
    }else{
         printf("%d is not evenly divisible by %d.\n",a,b);
    }
    return 0;
}
