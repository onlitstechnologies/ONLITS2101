#include<stdio.h>
int main()
{
	int str[30], rev[30];
	printf("Enter a string: ");
	scanf("%s", str);
	strcpy(rev, str);
	strrev(rev)				//Not available in gcc
}
