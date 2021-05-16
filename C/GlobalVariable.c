#include<stdio.h>

float perimeter();		//function declaration/prototype

float l, b;		//global variable

int main()
{
	float p;	//local variable
	printf("Enter length: ");
	scanf("%f", &l);
	printf("Enter breadth: ");
	scanf("%f", &b);
	p = perimeter();		//function call
	printf("The perimeter is %1.2f.\n", p);
	return 0;
}

//------- Function Definition --------------
float perimeter()	
{
	return (2 * (l + b));
}
