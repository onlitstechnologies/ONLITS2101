#include<stdio.h>
int main()
{
	int i, j;
	for(i=1; i<=9; i++)
	{
		for(j=1; j<=9-i+1; j++)		//Nesting of loops
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}


/*
	Eg.
		*	*	*	*	*
		*	*	*	*
		*	*	*	
		*	*	
		*	
*/
