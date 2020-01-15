#include <stdio.h>

int main()
{
    int num,cube;
    printf("enter any num:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        cube=i*i*i;
        printf("%d\n",cube);
    }
    return 0;
}
