#include<stdio.h>
int main()
{
    int a = 10;   //RAM
    register int b = 20;    //CPU Register
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}