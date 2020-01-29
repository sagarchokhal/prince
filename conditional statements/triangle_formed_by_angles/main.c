#include <stdio.h>

int main()
{
    int angle1,angle2,angle3;
    printf("enter 3 angles:\n");
    scanf("%d %d %d",&angle1,&angle2,&angle3);

    if(angle1+angle2+angle3==180){
        printf("a triangle can be formed.\n");
    }else{
        printf("a triangle cannot be formed.\n");
    }
    return 0;
}
