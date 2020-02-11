#include <stdio.h>
void  fun1(int n){

    if (n == 0) {
        printf("%d\n", n);
    } else {
        for (int i = 0; i < 3; i++) {
            fun1(n - 1);
        }
        printf("%d\n", n);
    }
}
int main()
{
    fun1(5);
    return 0;
}
