#include <stdio.h>

int main()
{
    int radius;
    float pi=3.1416,volume,area;
    printf("Enter the radius: ");
    scanf("%d",&radius);
    volume=4*(pi*radius*radius*radius)/3;
    area=4*(pi*radius*radius);
    printf("Volume and area of sphere having radius %d is %f & %f respectively.\n",radius,volume,area);
    return 0;
}
