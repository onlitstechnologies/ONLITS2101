#include<stdio.h>
#define f(x,y) x*y-y*y+1                        //macro definition
#define g(x,y) f(1,1), f(1, -1)
int main()
{
    int dif;
    dif = f(1, -1) + g(1,-1);
    printf("The difference is = %d\n", dif);
    return 0;
}