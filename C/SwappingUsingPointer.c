/*
	PROGRAM TO SWAP TWO NUMBERS USING POINTERS
*/
#include<stdio.h>
void swap(int *x, int *y);		//Function declaration/prototype
int main()
{
	int a, b;
	printf("Enter the value of a: ");
	scanf("%d", &a);
	printf("Enter the value of b: ");
	scanf("%d", &b);
	swap(&a, &b);		//Call by reference
	printf("The value of a and b after swapping are %d and %d, respectively.\n", a, b);
	return 0;
}

void swap(int *x, int *y)
{
	int z;
	z = *x;
	*x = *y;
	*y = z;
}
