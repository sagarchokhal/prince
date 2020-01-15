#include <stdio.h>

int main()
{
    int num,sum=0;
    printf("enter nth term of odd num:");
    scanf("%d",&num);
    for(int i=1;i<=num;i=i+2){
        sum+=i;
    }printf("%d is the n terms of odd natural num and sum=%d.\n",num,sum);
    return 0;
}
