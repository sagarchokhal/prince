#include <stdio.h>

int main()
{
    int side1,side2,side3;
    printf("enter three sides of a triangle:\n");
    scanf("%d %d %d",&side1,&side2,&side3);
    if(side1==side2&&side2==side3){
        printf("it is equilateral triangle.\n");

    }else if(side1==side2 ||side1==side3||side2==side3)
    {
        printf("it is isoceles triangle.\n");
    } else  {

   printf("it is scalene triangle.\n");
    }

    return 0;
}
