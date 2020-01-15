#include<stdio.h>
int main(){
    int numb,factorial=1;
    printf("enter any number:");
    scanf("%d",&numb);
    if(numb!=0){
        for(int i=1;i<=numb;i++){
            factorial*=i;
        }
        printf("the factorial of %d is %d.\n",numb,factorial);

    }


    return 0;
}
