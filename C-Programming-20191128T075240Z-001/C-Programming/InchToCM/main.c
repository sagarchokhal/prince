#include <stdio.h>

int main()
{
    int length;
    float convertedValue;
    printf("Enter value  of length in inch: ");
    scanf("%d",&length);
    convertedValue=(length/39.37)*100;
    printf("%d inch is equal to %f cm\n",length,convertedValue);
    return 0;
}
