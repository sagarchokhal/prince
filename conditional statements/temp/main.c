#include <stdio.h>

int main()
{
    int temp;
    printf("enter temperature:");
    scanf("%d",&temp);
    if(temp<0){
        printf("freezing wheather.\n");
    }else if (temp>0 &&temp<10) {
        printf("very cold weather");
}else if (temp>10 &&temp<20) {
        printf("cold wheather.\n");
}else if (temp>20 && temp<30) {
        printf("normal temp.\n");
}else if (temp>30 && temp<40) {
        printf("hot temp");
}else{
    printf("very hot temp.\n");
    }

    return 0;
}
