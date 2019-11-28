#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    if(number%6==0&&number%7==0){
        printf("%d is divisible by both 6 & 7\n",number);
    }
    return 0;
}
