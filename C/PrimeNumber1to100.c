/*
	PROGRAM TO FIND WHETHER THE NUMBER IS PRIME OR COMPOSITE
*/
#include<stdio.h>
int main()
{
	int  i, j, f;
	printf("Prime numbers between 1 and 100 are:\n");
	for(i=1; i<=200; i++)
	{
		for(j=1,f=0; j<=i; j++)
		{
			if(i%j==0)
			{
				f++;
			}
		}
		if(f==2)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
}
