#include <stdio.h>
#define N 4
struct student{
    char name[20];
    int eng;
    int math;
    int phys;
};
static struct student data[]={
{"Ram", 82, 72, 58},
{"Hari", 77, 82, 79},
{"Ashesh", 52, 62, 39},
{"Aayush", 61, 82, 88} };
int main(void) {
    int i,total[3]={0,0,0};
    char grade;
    for(i=0; i<N; i++){
        if((float)(data[i].eng+data[i].math+data[i].phys)/3<60){
            grade='e';
        }else if((float)(data[i].eng+data[i].math+data[i].phys)/3<70){
            grade='d';
        }else if((float)(data[i].eng+data[i].math+data[i].phys)/3<80){
            grade='c';
        }else if((float)(data[i].eng+data[i].math+data[i].phys)/3<90){
            grade='b';
        }else{
            grade='a';
        }
        total[0]+=data[i].eng;
        total[1]+=data[i].math;
        total[2]+=data[i].phys;
        printf("%7s: Eng = %3d  Math = %3d   Phys = %3d   Mean=%3.2f   Grade = %3c\n",
               data[i].name, data[i].eng, data[i].math, data[i].phys,(float)(data[i].eng+data[i].math+data[i].phys)/3,grade);
    }
   if(total[0]<total[1] && total[0]<total[2]){
    printf("Student are worse in english.\n");
   }
   if(total[1]<total[0] && total[1]<total[2]){
    printf("Student are worse in maths.\n");
   }
   if(total[2]<total[1] && total[2]<total[0]){
    printf("Student are worse in physics.\n");
   }
   if(total[0]>total[1] && total[0]>total[2]){
    printf("Student are good in english.\n");
   }
   if(total[1]>total[0] && total[1]>total[2]){
    printf("Student are good in maths.\n");
   }
   if(total[2]>total[1] && total[2]>total[0]){
    printf("Student are good in physics.\n");
   }
    return (0);
}
