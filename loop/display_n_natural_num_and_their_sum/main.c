#include<stdio.h>
int main (){

    int n,sum=0;
    printf("enter n terms of natural num:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){

    sum=sum+i;

    }printf("n terms of natural number is %d and their sum is %d.\n",n,sum);

    return 0;
}
