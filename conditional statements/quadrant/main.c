#include <stdio.h>

int main()
{
    int x,y;
    printf("enter the coodinate.\n");
    scanf("%d %d",&x,&y);
    if(x==0 &&y==0){
        printf("it lies on the origin.\n");
    }else if(x>0 && y>0){
        printf("it lies on the 1 quadrant.\n");
    }else if(x<0 && y>0){
        printf("it lies on the 2 quadrant.\n");
    }else if(x<0 && y<0){
        printf("it lies on the 3 quadrant.\n");
    }else{
        printf("it lies on the 4 quadrant.\n");
    }
    return 0;
}
