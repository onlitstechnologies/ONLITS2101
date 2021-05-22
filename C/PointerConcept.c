#include<stdio.h>
int main()
{
	int a=10;
	int *p=&a;
	
	printf("The value of a is %d.\n", a);
	printf("The address of a is %p.\n", &a);
	printf("The value of p (which is the address of a) is %p.\n", p);
	printf("The address of p is %p.\n", &p);
	printf("The value of a shown using *p is %d.\n", *p);
	return 0;
}

/*
	Pointer is a special variabe which stores the address of 
	another variable.
*/
