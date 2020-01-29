#include <stdio.h>

int main()
{
   int age;
   printf("enter a age:");
   scanf("%d",&age);
   if(age>=18){
   printf("candidate is eligible for casting his own vote.\n");

   }else{
   printf("candidate is not eligible for casting his own vote.\n");
   }
    return 0;
}
