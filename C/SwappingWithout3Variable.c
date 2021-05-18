/*
	Program to swap/interchange the values of two variables whithout
	using the third variable
*/

#include<stdio.h>
int main()
{
	int a, b;
	printf("Enter the value of a: ");
	scanf("%d", &a);
	printf("Enter the value of b: ");
	scanf("%d", &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("The value of a and b after swapping are %d and %d, respectively\n", a, b);
	return 0;
}
