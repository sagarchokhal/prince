#include<stdio.h>
int main(){
    int num;
    printf("enter a num:");
    scanf("%d",&num);
    if(num%2==0){
        printf("this num is even.\n");

    }else{
        printf("this num is odd.\n");
    }
    return 0;
}
