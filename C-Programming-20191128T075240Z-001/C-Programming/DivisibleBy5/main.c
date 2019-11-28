#include <stdio.h>

int main()
{
    int userInput;
    printf("Enter a number: ");
    scanf("%d",&userInput);
    if(userInput%5==0){
        printf("%d is divisible by 5\n",userInput);
    }else{
        printf("%d is not divisible by 5\n",userInput);
    }
    return 0;
}
