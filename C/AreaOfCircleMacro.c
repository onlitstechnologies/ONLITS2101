#include<stdio.h>
#define PI 3.14
#define SQ(r) r * r
int main()
{
    float r, a;
    printf("Enter radidus: ");
    scanf("%f", &r);
    a = PI * SQ(r);
    printf("The area is %1.2f\n", a);
    return 0;
}