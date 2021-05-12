/*
	Program to swap/interchange the values of two variables
*/

#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter the value of a: ");
	scanf("%d", &a);
	printf("Enter the value of b: ");
	scanf("%d", &b);
	c = b;
	b = a;
	a = c;
	printf("The value of a and b after swapping are %d and %d, respectively\n", a, b);
	return 0;
}
