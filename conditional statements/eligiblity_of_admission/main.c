#include <stdio.h>

int main()
{
    int math,chem,phy,total_in_3_sub;
    printf("enter marks in 3 different subjects.\n");
    scanf("%d %d %d",&math,&chem,&phy);
    if(math>=65 && phy>=55 && chem>=50 && total_in_3_sub>=180){
        printf("eligible for a professional course.\n");
    }else if(math+phy>=140||math+chem>=140){
      printf("eligible for a professional course.\n");
    }else{
        printf("Is not eligible for a professional course.\n");
    }
    return 0;
}
