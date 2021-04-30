#include<stdio.h>
int main()
{
	int ft=1, st=1, nt, i=3, m;
	printf("Enter upto what term fibonacci series is to be displayed: ");
	scanf("%d", &m);
	printf("Following is the fibonacci series upto %d terms:\n", m);
	printf("%d %d ", ft, st);
	do
	{
		nt = ft + st;
		printf("%d ", nt);
		ft = st;
		st = nt;
		i++;
	}
	while(i<=m);
	printf("\n");
	return 0;
}
