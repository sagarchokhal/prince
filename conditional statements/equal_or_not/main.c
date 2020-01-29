#include<stdio.h>
int main(){
    int num1,num2;
    printf("enter two numbers:\n");
    scanf("%d %d",&num1,&num2);
    if(num1==num2){
        printf("they are equal.\n");
    }else{
        printf("they are not equal.\n");
    }
    return 0;

}
