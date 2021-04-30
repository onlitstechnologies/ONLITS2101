#include<stdio.h>
int main()
{
	int ft=1, st=1, nt, i, m;
	printf("Enter upto what term fibonacci series is to be displayed: ");
	scanf("%d", &m);
	printf("Following is the fibonacci series upto %d terms:\n", m);
	printf("%d %d ", ft, st);
	for(i=3; i<=m; i++)
	{
		nt = ft + st;
		printf("%d ", nt);
		ft = st;
		st = nt;
	}
	printf("\n");
	return 0;
}
