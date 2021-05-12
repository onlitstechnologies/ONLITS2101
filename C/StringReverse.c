#include<stdio.h>
int main()
{
	char str[30], rev[30];
	int i, l=0;
	printf("Enter a string: ");
	scanf("%s", str);
	while(str[l] != '\0')
	{
		l++;
	}
	for(i=0; i<l; i++)
	{
		rev[i] = str[l-i-1];
	}
	rev[l] = str[l];
	
	printf("The reverse of %s is %s.\n", str, rev);
	return 0;
}
