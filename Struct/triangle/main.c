#include <stdio.h>
struct coordinate{
    int x,y;
};
struct triangle_t{
    struct coordinate p1;
    struct coordinate p2;
    struct coordinate p3;
};

int main()
{
    struct triangle_t triangle;
    triangle.p1.x=0;
    triangle.p1.y=0;
    triangle.p2.x=100;
    triangle.p2.y=75;
    triangle.p3.x=-60;
    triangle.p3.y=80;
    printf("Coordinate of triangle is (%d,%d)(%d,%d)(%d,%d)\n",
           triangle.p1.x,triangle.p1.y,triangle.p2.x,triangle.p2.y,triangle.p3.x,triangle.p3.y);
    return 0;
}
