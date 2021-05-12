/* ANSI C - 8.5*/

#include<stdio.h>
int main()
{
	char str[30];
	int i , j, t, l=0;
	
	printf("Enter a string: ");
	scanf("%s", str);
	
	while(str[l] != '\0')
	{
		l++;
	}
	
	for(i=0; i<l-1; i++)		//Sorting logic
	{
		for(j=i+1; j<l; j++)
		{
			if(str[i]>str[j])
			{
				//swapping
				t = str[i];
				str[i] = str[j];
				str[j] = t;
			}
		}
	}
	printf("The character of string in order are: %s\n", str);

	return 0;
}
