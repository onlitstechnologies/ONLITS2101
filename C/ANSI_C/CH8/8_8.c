#include<stdio.h>
int main()
{
	char str[30];
	int flag=0, l=0, i;
	printf("Enter a string: ");
	scanf("%s", str);
	
	while(str[l] != '\0')
	{
		l++;
	}
	
	for(i=0; i<=l/2; i++)
	{
		if(str[i] != str[l-i-1])
		{
			flag = 1;
			break;
		}
	}

	if(flag==0)
		printf("%s is a palindrome\n", str);
	else
		printf("%s is not a palindrome\n", str);

	return 0;
}
