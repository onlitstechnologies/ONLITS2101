#include<stdio.h>
int main()
{
	char str[30];
	int i, s, n;
	printf("Enter a string: ");
	scanf("%[^\n]", str);
	printf("Enter the starting index: ");
	scanf("%d", &s);
	printf("Enter how many characters: ");
	scanf("%d", &n);
	printf("The extracted substring is: ");
	for(i=0; i<n; i++)
	{
		printf("%c", str[i+s]);
	}
	printf("\n");
	return 0;
}
