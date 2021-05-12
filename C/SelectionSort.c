				/*SELECTION SORT*/

#include<stdio.h>
#define SIZE 5		//Symbolic Constant
int main()
{
	int no[SIZE], i , j, t;
	
	printf("Enter %d integers below:\n", SIZE);
	for(i=0; i<SIZE; i++)
	{
		scanf("%d", &no[i]);
	}
	
	for(i=0; i<SIZE-1; i++)		//Sorting logic
	{
		for(j=i+1; j<SIZE; j++)
		{
			if(no[i]>no[j])
			{
				//swapping
				t = no[i];
				no[i] = no[j];
				no[j] = t;
			}
		}
	}
	printf("The sorted integers in ascending order are:\n");
	
	for(i=0; i<SIZE; i++)
	{
		printf("%d\n", no[i]);
	}

	printf("\n");
	return 0;
}
