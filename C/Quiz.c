#include<stdio.h>
#include<string.h>
int main()
{
	char ans[20];
	printf("Q. Who is known as the father of computer?\n");
	printf("A. ");
	scanf("%[^\n]", ans);
	if(strcmp(ans, "Charles Babbage")==0)
	{
		printf("Very good!\n");
	}
	else
	{
		printf("Very poor!\n");
	}
	return 0;
}

/*
	A, B, 	Capital letters - Uppercase
	a,b, 	small letters - Lowercase
	
	Charles Babbage == charles babbage
	
	strcmp is case sensitive
	
*/
