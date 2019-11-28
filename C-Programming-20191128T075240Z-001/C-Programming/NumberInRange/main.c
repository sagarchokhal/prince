#include <stdio.h>

int main()
{
    int num,lowerLimit,upperLimit;
    printf("Enter lower limit of range ");
    scanf("%d",&lowerLimit);
    printf("Enter upper limit of range ");
    scanf("%d",&upperLimit);
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num>lowerLimit && num<upperLimit){
        printf("This number lies within the range\n");
    }
    return 0;
}
