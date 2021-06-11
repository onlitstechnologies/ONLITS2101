#include<stdio.h>
void fibonacci(int n);
int main()
{
	int n;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	printf("Fibonacci Series upto %d terms is:\n", n);
	printf("0 1 ");
	fibonacci(n);	//fibonacci(n-2)
	printf("\n");
	return 0;
}

void fibonacci(int n)
{
	static int ft = 0, st = 1, nt;
	if(n>0)			//exit condition
	{
		nt = ft + st;
		ft = st;
		st = nt;
		printf("%d ", nt);
		fibonacci(n-1);
	}
}
