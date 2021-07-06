#include<stdio.h>
#define X(a, b, c) a/(b-c)
int main()
{
    int x;
    x = X(250, 85, 25);
    printf("The value of x is %d.\n", x);
    return 0;
}