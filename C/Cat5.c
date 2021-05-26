/*
		Division that returns quotient and remainder using function
*/

#include<stdio.h>
void divide(int u, int v, int *w, int *x);	//function declaration
int main()
{
	int a, b, q, r;
	
	printf("Enter a number: ");
	scanf("%d", &a);
	printf("Enter another number: ");
	scanf("%d", &b);
	divide(a, b, &q, &r);
	printf("Quotient: %d\n", q);
	printf("Remainder: %d\n", r);
	return 0;
}

void divide(int u, int v, int *w, int *x)
{
	*w = u/v;	//quotient
	*x = u%v;	//remainder
}
