#include <stdio.h>

int main()
{
    int radius;
    float pi=3.1416;
   printf("Enter radius of circle: ");
   scanf("%d",&radius);
   printf("Circumference of circle is:%f \n",2*pi*radius);
   printf("Area of Circle having radius %d is: %f\n",radius,pi*radius*radius);
    return 0;
}
