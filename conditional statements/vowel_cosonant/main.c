#include <stdio.h>

int main()
{
    char name;
    printf("enter an alphabet:");
    scanf("%c",&name);
    if(name=='a'||name=='e'||name=='i'||name=='o'||name=='u'){
        printf("it is a vowel.\n");
    }else{
        printf("it is a consonant.\n");
    }
    return 0;
}
