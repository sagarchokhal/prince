#include <stdio.h>

int main()
{
    int num,sum=0,num1,num2;
    printf("enter a num:");
    scanf("%d",&num);
    num1=num;
    while (num1!=0) {
        num2=num1%10;
        sum+=num2;
        num1=num1/10;
          }
    printf("%d is the sum of digit of an integer.\n",sum);


    return 0;
}
