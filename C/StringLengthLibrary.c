/* Program to find the length of a string using library function strlen() */
#include<stdio.h>
#include<string.h>
int main()
{
	char str[30], len;
	printf("Enter a string: ");
	scanf("%[^\n]", str);
	len = strlen(str);		//library function
	printf("The length of %s is %d.\n", str, len);
	return 0;
}
