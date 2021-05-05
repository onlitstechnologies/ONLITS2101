/* WAP to accept elements in a 3 X 3 matrix and display it. */

#include<stdio.h>
int main()
{
	int matrix[3][3], i, j;
	
	printf("Enter the elements of a 3 X 3 matrix below:\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d", &matrix[i][j]);
		}
	}
	
	printf("The elements of matrix are as follows:\n");
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
