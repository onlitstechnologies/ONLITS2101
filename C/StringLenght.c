/*Program to find the length of a string without using library function */
#include<stdio.h>
int main()
{
	char str[30], i=0;
	printf("Enter a string: ");
	scanf("%[^\n]", str);
	while(str[i] != '\0')
	{
		i++;
	}
	printf("The of length of %s is %d.\n", str, i);
	return 0;
}
