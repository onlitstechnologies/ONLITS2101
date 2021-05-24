#include<stdio.h>
int main()
{
	int nos[5], i, *p;
	p = nos;
	printf("Enter 5 numbers below:\n");
	for(i=0; i<5; i++)
	{
		scanf("%d", p);
		p++;
	}
	printf("The elements of array in reverse order are:\n");
	p--;
	for(i=0; i<5; i++)
	{
		printf("%d\n", *p);
		p--;
	}
	return 0;
}
