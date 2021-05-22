/*
PROGRAM TO DEMONSTRATE CALL/PASS BY REFERENCE PARAMETER PASSING METHOD
*/
#include<stdio.h>
int sum(int *x, int *y);		//function declaration/prototype
//-------------- main() function definition -----------
int main()
{
	int a, b, c;
	printf("Enter a number: ");
	scanf("%d", &a);
	printf("Enter another number: ");
	scanf("%d", &b);
	c = sum(&a, &b);			//function call (called by passing value)
	printf("The sum is %d.\n", c);
	return 0;
}

//------- Function definition ---------
int sum(int *x, int *y)
{
	return *x + *y;
}
