#include<stdio.h>
#include "MyLib.c"
#define PI 3.14		//Declare Constant
int main()
{
	int r, a;
	printf("Enter radius: ");
	scanf("%d", &r);
	
	a = PI * power(r, 2);
	
	printf("The area is %d.\n", a);
	
	return 0;
}
