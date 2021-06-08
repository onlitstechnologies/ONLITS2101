#include<stdio.h>
int factorial(int n);
int main()
{
	int n, f;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	f = factorial(n);
	
	printf("The factorial of %d is %d.\n", n, f);
	return 0;
}

int factorial(int n)
{
	int f;
	
	if(n==0)
		return 1;
	
	f = n * factorial(n-1);		//recursion
	
	return f;
}

/*

	f(n) = n * f(n-1);
*/
