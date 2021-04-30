#include<stdio.h>
int main()
{
	int i, n;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	{
		printf ("Iteration # %d.\n", i);
		
		if(i==5)
		{
			break;
		}
	}
	
	printf("Your loop ran %d times.\n", i);
	return 0;
}
