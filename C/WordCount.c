/*WAP to accept a line of text and count the number words*/
#include<stdio.h>
int main()
{
	char str[100];
	int i=0, w=1;
	printf("Enter a string: ");
	scanf("%[^\n]", str);
	while(str[i] != '\0')
	{
		if(str[i] == ' ')
		{
			w++;
		}
		i++;
	}
	printf("The above text has %d words.\n", w);
	return 0;
}
