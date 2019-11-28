#include <stdio.h>

int main()
{
    double number1,number2;
    printf("Enter first number ");
    scanf("%lf",&number1);
    printf("enter second number ");
    scanf("%lf",&number2);
    if(number1*number2>100){
        printf("The product is greater than 100\n");
    }else if(number1*number2==100){
         printf("The product is equal to 100\n");
    }else{
        printf("product is less than 100\n");
    }
    return 0;
}
