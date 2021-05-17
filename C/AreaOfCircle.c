#include<stdio.h>
#include "MyLib.c"
//#define PI 3.14		//Declare Constant
int main()
{
	float r, a;
	printf("Enter radius: ");
	scanf("%f", &r);
	
	a = pi() * power(r, 2);		//here pi() is category 4 of function
	
	printf("The area is %f sq. units.\n", a);
	
	return 0;
}
