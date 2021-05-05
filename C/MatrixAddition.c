/* WAP to accept elements in two 3 X 3 matrices and add them. */

#include<stdio.h>
int main()
{
	int matrix1[3][3], matrix2[3][3], sum[3][3], i, j;
	
	//--------------- Taking input for the first matrix ----------
	printf("Enter the elements of the first 3 X 3 matrix below:\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d", &matrix1[i][j]);
		}
	}
	
	//------------ Taking input for the second matrix ------------
	printf("Enter the elements of the second 3 X 3 matrix below:\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d", &matrix2[i][j]);
		}
	}
	
	//-------------- Calculating the sum of the two matrices -----
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			sum[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}
	
	
	printf("The elements of matrix are as follows:\n");
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%5d", sum[i][j]);
		}
		printf("\n\n");
	}
	
	return 0;
}
