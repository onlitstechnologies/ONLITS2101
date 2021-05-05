/* WAP to accept the user name and greet him Good Morning! */

#include<stdio.h>
int main()
{
	char name[30];
	printf("Enter you name: ");
	scanf("%[^\n]", name);
	printf("Good Morning! %s\n", name);
	return 0;
}

/*
	By default scanf() can read upto a blank space.
*/
