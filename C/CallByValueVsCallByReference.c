/*
	PROGRAM TO COMPARE CALL BY VALUE AND CALL BY REFERENCE
*/

#include<stdio.h>
void increment(int x, int *y);
int main()
{
	int a, b;
	printf("Enter the value of a: ");
	scanf("%d", &a);
	printf("Enter the value of b: ");
	scanf("%d", &b);
	increment(a, &b);
	printf("The value of a is %d.\n", a);
	printf("The value of b is %d.\n", b);
	return 0;
}

void increment(int x, int *y)
{
	++x;
	++*y;
} 
