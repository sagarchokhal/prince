#include <stdio.h>
#include<math.h>

int main()
{
    int x1,x2,y1,y2;
    double distance;

    printf("enter the cordinates of kathmandu:\n");
    scanf("%d %d",&x1,&y1);
    printf("enter the coordinates of pokhara:\n");
    scanf("%d %d",&x2,&y2);
     distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("%lf is the distance from ktm to pokhara.\n",distance);
    return 0;
}
