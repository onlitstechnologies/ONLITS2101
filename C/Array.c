/*
	PROGRAM TO FIND THE SUM OF TWO INTEGER USING ARRAY	
*/

#include<stdio.h>
int main()
{
	int a[3]; 	//int a, b, c;
	printf("Enter a number: ");
	scanf("%d", &a[0]);
	printf("Enter another number: ");
	scanf("%d", &a[1]);
	a[2] = a[0] + a[1];
	printf("The sum is %d.\n", a[2]);
	return 0;
}
