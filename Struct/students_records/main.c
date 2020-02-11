#include <stdio.h>
#include<string.h>
struct student_data{
    int id,mm,dd,yy;
    char name[50];
    char address[60];
    char faculty[15];
};

int main()
{
    struct student_data data;
    data.id=1;
    strcpy(data.name,"birat vatij");
    strcpy(data.address,"malepaten");
    strcpy(data.faculty,"Software");
    data.mm=8;
    data.yy=2058;
    data.dd=19;
    printf("\tID Name\t\t Address \tFaculty\t MM\t DD\t YY \n");
    printf("%10d %5s %11s %13s %d %8d %8d\n",data.id,data.name,data.address,data.faculty,data.mm,data.dd,data.yy);
    return 0;
}
