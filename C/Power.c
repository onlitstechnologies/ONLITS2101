/*
	Write a program to accept two numbers and find the result of
	1st number to the power 2nd number.
*/

#include<stdio.h>
int main()
{
	int n, m, p=1, i;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("Enter another number: ");
	scanf("%d", &m);
	
	for(i = 1; i<=m; i++)
	{
		p = p * n;
	}
	
	printf("%d raised to the power %d is %d.\n", n, m, p);
	
	return 0;
}
