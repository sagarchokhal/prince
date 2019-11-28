#include <stdio.h>

int main()
{
    int firstSide,secondSide,thirdSide;
    printf("Enter the first side of triangle ");
    scanf("%d",&firstSide);
    printf("Enter the second side of triangle ");
    scanf("%d",&secondSide);
    printf("Enter the third side of triangle ");
    scanf("%d",&thirdSide);
    if(firstSide+secondSide>thirdSide && secondSide+thirdSide>firstSide && thirdSide+firstSide>secondSide){
        printf("It is a valid triangle\n");
    }else{
        printf("It is not a valid triangle\n");
    }
    return 0;
}
