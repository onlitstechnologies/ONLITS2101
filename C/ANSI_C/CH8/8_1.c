#include<stdio.h>
int main()
{
	char name[30], i=0;
	printf("Enter your name: ");
	scanf("%[^\n]", name);
	while(name[i] != '\0')
	{
		printf("%c\t-\t%d\n", name[i], name[i]);
		i++;
	}
	return 0;
}
