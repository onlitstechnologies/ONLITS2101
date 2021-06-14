#include<stdio.h>
void function1();
void function2();
int a;              //global
int main()
{
    function2();
}

void function1()
{
    //extern int a;
}
void function2()
{
    a = 10;
    printf("a = %d\n", a);
}