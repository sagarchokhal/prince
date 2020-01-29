#include <stdio.h>

int main()
{
    int side1,side2,side3;
    printf("enter three sides:\n");
    scanf("%d %d %d",&side1,&side2,&side3);
    if(side1+side2>side3&&side1+side3>side2&&side2+side3>side1){
        printf("a triangle can be formed.\n");
    }else{
        printf("a triangle cannot be formed.\n");
    }
    return 0;
}
