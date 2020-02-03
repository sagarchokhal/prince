#include <stdio.h>

int main()
{
    int decimal,factor,binary=0,multiplier=1;
    printf("enter a decimal number");
    scanf("%d",&decimal);

    int decimal1=decimal;
    while(decimal1!=0)
    {
        factor=decimal1%2;
        factor=factor*multiplier;
        binary=binary+factor;
        multiplier=multiplier*10;
        decimal1=decimal1/2;

    }
    printf("binary equivalent of %d is %d",decimal,binary);

    return 0;
}
