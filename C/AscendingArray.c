#include<stdio.h>
#define SIZE 10		//Symbolic Constant
int main()
{
	int no[SIZE], i , j, t;
	
	printf("Enter %d integers below:\n", SIZE);
	for(i=0; i<SIZE; i++)
	{
		scanf("%d", &no[i]);
	}
	
	for(i=0; i<SIZE-1; i++)
	{
		for(j=i+1; j<SIZE; j++)
		{
			if(no[i]>no[j])
			{
				t = no[i];
				no[i] = no[j];
				no[j] = t;
			}
		}
	}
	printf("The integers in ascending order are: ");
	
	for(i=0; i<SIZE; i++)
	{
		printf("%d, ", no[i]);
	}

	printf("\n");
	return 0;
}
