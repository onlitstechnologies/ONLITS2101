#include<stdio.h>
int main()
{
	int cp,sp,p,l;
	printf("Enter cost price: ");
	scanf("%d",&cp);
	printf("Enter selling price: ");
	scanf("%d",&sp);
	if(sp>cp)
	{
		p=sp-cp;
		printf("The seller has earned a profit of Rs. %d.\n", p);
	}
	else
	{
		l=cp-sp;
		printf("The seller has incurred a loss of Rs. %d.\n", l);
	}
	return 0;
}
