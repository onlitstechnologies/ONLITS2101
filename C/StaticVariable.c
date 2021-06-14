#include<stdio.h>
void increment();
int main()
{
    int i;
    for(i=1; i<=5; i++)
        increment();
}

void increment()
{
    static int i;      //static

    i++;

    printf("i = %d\n", i);
}