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
    struct student_data data[5];
    data[0].id=1;
    strcpy(data[0].name,"Ramesh Acharya");
    strcpy(data[0].address,"malepaten");
    strcpy(data[0].faculty,"Software");
    data[0].mm=8;
    data[0].yy=2058;
    data[0].dd=19;
    printf("\tID Name\t\t Address \tFaculty\t MM\t DD\t YY \n");
    printf("%10d %5s %11s %13s %d %8d %8d\n",data[0].id,data[0].name,data[0].address,data[0].faculty,data[0].mm,data[0].dd,data[0].yy);
    data[1].id=10;
    strcpy(data[1].name,"Sunil Poudel");
    strcpy(data[1].address,"malepaten");
    strcpy(data[1].faculty,"Software");
    data[1].mm=8;
    data[1].yy=2058;
    data[1].dd=19;
//    printf("\tID Name\t\t Address \tFaculty\t MM\t DD\t YY \n");
    printf("%10d %7s %10s %13s %d %8d %8d\n",data[1].id,data[1].name,data[1].address,data[1].faculty,data[1].mm,data[1].dd,data[1].yy);
    data[2].id=2;
    strcpy(data[2].name,"Birat Chokhal");
    strcpy(data[2].address,"malepaten");
    strcpy(data[2].faculty,"Software");
    data[2].mm=8;
    data[2].yy=2058;
    data[2].dd=19;
//    printf("\tID Name\t\t Address \tFaculty\t MM\t DD\t YY \n");
    printf("%10d %5s %10s %13s %d %8d %8d\n",data[2].id,data[2].name,data[2].address,data[2].faculty,data[2].mm,data[2].dd,data[2].yy);
    data[3].id=3;
    strcpy(data[3].name,"Saurab Basnet");
    strcpy(data[3].address,"malepaten");
    strcpy(data[3].faculty,"Software");
    data[3].mm=8;
    data[3].yy=2058;
    data[3].dd=19;
//    printf("\tID Name\t\t Address \tFaculty\t MM\t DD\t YY \n");
    printf("%10d %5s %11s %13s %d %8d %8d\n",data[3].id,data[3].name,data[3].address,data[3].faculty,data[3].mm,data[3].dd,data[3].yy);
    data[4].id=4;
    strcpy(data[4].name,"Ramesh shrestha");
    strcpy(data[4].address,"malepaten");
    strcpy(data[4].faculty,"Software");
    data[4].mm=8;
    data[4].yy=2058;
    data[4].dd=19;
//    printf("\tID Name\t\t Address \tFaculty\t MM\t DD\t YY \n");
    printf("%10d %5s %11s %13s %d %8d %8d\n",data[4].id,data[4].name,data[4].address,data[4].faculty,data[4].mm,data[4].dd,data[4].yy);

    return 0;
}
