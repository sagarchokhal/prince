#include <stdio.h>

int main()
{
    int roll_no,marks1,marks2,marks3;
    char name[20];
    printf("enter your name:\n");
    scanf("%s",&name);
    printf("enter your roll no:\n");
    scanf("%s",&roll_no);
    printf("enter marks in 3 subjects:\n");
    scanf("%d %d %d",&marks1,&marks2,&marks3);
    printf("%d is the total marks.\n",marks1+marks2+marks3);
    printf("%f is the total percentage.\n",(marks1+marks2+marks3)/3.0);
    if((marks1+marks2+marks3)/3.0>=80&& marks1>=40 && marks2>=40 && marks3>=40){
        printf("distinction\n");
    }else if ((marks1+marks2+marks3)/3.0>=60&& marks1>=40 && marks2>=40 && marks3>=40) {
        printf("1st division\n");
}else if ((marks1+marks2+marks3)/3.0>=50&& marks1>=40 && marks2>=40 && marks3>=40) {
        printf("2nd division\n");
}else if ((marks1+marks2+marks3)/3.0>=40&& marks1>=40 && marks2>=40 && marks3>=40) {
        printf("3rd division\n");

}else{
    printf("fail");
    }



    return 0;
}
