#include<stdio.h>
#include<string.h>
int main()
{
	char str[30], rev[30];
	printf("Enter a string: ");
	scanf("%s", str);
	strcpy(rev, str);
	strrev(rev);		//Not available in gcc
	printf("The reverse of %s is %s.\n", str, rev);
	return 0;
}
