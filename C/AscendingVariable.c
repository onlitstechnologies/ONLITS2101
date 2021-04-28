#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);
	printf("Enter third number: ");
	scanf("%d", &c);
	if(a<b && b<c )
	{
		printf("The integers in ascending order are: %d, %d, %d.\n", a, b, c);
	}
	else if(b<c && c<a)
	{
		printf("The integers in ascending order are: %d, %d, %d.\n", b, c, a);
	}
	else if(c<b && b<a)
	{
		printf("The integers in ascending order are: %d, %d, %d.\n", c, b, a);
	}
	else if(a<c && c<b)
	{
		printf("The integers in ascending order are: %d, %d, %d.\n", a, c, b);
	}
	else if(c<a && a<b)
	{
		printf("The integers in ascending order are: %d, %d, %d.\n", c, a, b);
	}
	else if(b<a && a<c)
	{
		printf("The integers in ascending order are: %d, %d, %d.\n", b, a, c);
	}
	return 0;
}
