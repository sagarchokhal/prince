#include <stdio.h>

int main()
{
    int valuesInInches;
    int yard,foot,inch;
    printf("Enter values in inches: ");
    scanf("%d",&valuesInInches);
    yard=valuesInInches/36;
    foot=(valuesInInches%36)/12;
   // inch=(valuesInInches-(yard*36+foot*12));
    inch=(valuesInInches%36)%12;
    printf("%d inches = %d yard , %d foot and %d inch.\n",valuesInInches,yard,foot,inch);
    return 0;
}
