#include<stdio.h>
int main()
{
	int n1, n2, q, r;
	printf("Enter the first number: ");
	scanf("%d", &n1);
	printf("Enter the second number: ");
	scanf("%d", &n2);
	q = n1/n2;
	r = n1%n2;
	printf("Quotient: %d\n", q);
	printf("Remainder: %d\n", r);
	return 0;
}
