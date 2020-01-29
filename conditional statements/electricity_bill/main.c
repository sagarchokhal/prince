#include <stdio.h>

int main()
{
    int unit,customer_id;
    char name[40];
    printf("enter your name:\n");
    scanf("%s",name);
    printf("enter your customer_id:\n");
    scanf("%d",&customer_id);
    printf("enter unit consumed:\n");
    scanf("%d",&unit);
    if(unit<199){
        printf("%f is the total charge.\n",unit*1.20);
    }else if (unit>=200&& unit<400) {
        printf("%f is the total charge.\n",unit*1.50);
}else if (unit>=400 && unit<600) {
        printf("%f is the total charge.\n",unit*1.80);
}else if (unit=600 || unit>600) {
        printf("%f is the total charge.\n",unit*2.00);


}


    return 0;
}
