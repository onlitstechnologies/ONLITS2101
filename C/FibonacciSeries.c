#include<stdio.h>
int main()
{
	int ft=0, st=1, nt, i, n;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	
	printf("Fibonacci series up %d terms is:\n", n);
	printf("%d %d ", ft, st);
	
	for(i=3; i<=n; i++)
	{
		nt = ft + st;
		printf("%d ", nt);
		ft = st;
		st = nt;
	}
	printf("\n");
	return 0;
}
