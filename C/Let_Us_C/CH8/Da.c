#include<stdio.h>
#define SIZE 10		//defined a constant
int main()
{
	int no[SIZE], i, sv, status=0;
	printf("Enter 10 number below:\n");
	//----Strore number in array ------
	for(i=0; i<SIZE; i++)	
	{
		scanf("%d", &no[i]);
	}
	
	//------- Display algorithm ----
	printf("The entered array elements are as follows:\n");
	for(i=0; i<SIZE; i++)	
	{
		printf("%d\n", no[i]);
	}
	
	//------- Search algorithm -----
	
	printf("Enter the value to be searched: ");
	scanf("%d", &sv);
	
	for(i=0; i<SIZE; i++)
	{
		if(sv==no[i])
		{
			status = 1;
			printf("%d found at index %d.\n", sv, i);
		}	
	}
	if(status==0)
	{
		printf("%d was not found in the list.\n", sv);
	}
	return 0;
}
