#include <stdio.h>

int main()
{
    int num1,num2,num3;
    printf("enter 3 different numbers:\n");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2 && num1>num3){
        printf("%d is the largest of three numbers.\n",num1);
    }else if(num2>num1 &&num2>num3){
        printf("%d is the largest of three numbers.\n",num2);

    }else{
        printf("%d is the largest of three numbers.\n",num3);
    }
    return 0;
}
