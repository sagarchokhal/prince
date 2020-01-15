#include<stdio.h>
int main(){
    int number,sum=0;
    float average;
    printf("enter any random ten numbers:\n");
    for(int i=1;i<=10;i++){
            scanf("%d",&number);
            sum=sum+number;
            average=sum/10.0;

        }printf("sum of num is %d and average of num is %f.\n",sum,average);

        return 0;

          }
