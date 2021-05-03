/*
	PROGRAM TO FIND WHETHER THE NUMBER IS PRIME OR COMPOSITE
*/
#include<stdio.h>
int main()
{
	int n, i, f=0;
	printf("Enter a number: ");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		if(n%i==0)
		{
			f++;
		}
	}
	if(n==0 || n==1)
	{
		printf("%d is niether prime nor composite.\n", n);
	}
	else if(f==2)
	{
		printf("%d is a prime number.\n", n);
	}
	else
	{
		printf("%d is a composite number.\n", n);
	}
	return 0;
}
