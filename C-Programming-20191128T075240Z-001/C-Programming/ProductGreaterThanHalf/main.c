#include <stdio.h>

int main()
{
    double a,b;
    printf("Enter first number ");
    scanf("%lf",&a);
    printf("enter second number ");
    scanf("%lf",&b);
    if(a*b>a/2){
        printf("the product of %lf and %lf is greater than %lf\n",a,b,a/2);
    }
    return 0;
}
