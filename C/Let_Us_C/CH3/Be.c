#include<stdio.h>
int main()
{
	int n, a, d, i;
	printf("The armstrong numbers between 1 and 500 are:\n");
	for(i=1; i<=500; i++)
	{
		n=i;
		a=0;
		while(n>0)
		{
			d = n%10;
			n = n/10;
			a = a + (d * d * d);
		}
		if(i==a)
		{
			printf("%d, ", i);
		}
	}
	printf("\n");
	return 0;
}
