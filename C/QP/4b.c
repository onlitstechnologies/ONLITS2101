#include<stdio.h>
int main()
{
	int a, b, i, x, hcf;
	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("Enter the second number: ");
	scanf("%d", &b);
	x = a<b ? a : b;		//?: - conditional operator
	
	for(i=x; i>=1; i--)
	{
		if(a%i==0 && b%i==0)
		{
			hcf = i;
			break;
		}
	}
	printf("The HCF of %d and %d is %d.\n", a, b, hcf);
	return 0;
}

/*
	16	-	1, 2, 4, 8, 16
	32	-	1, 2, 4, 8, 16

*/
