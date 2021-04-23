/*
	Let Us C book Exercise H(g)
*/

#include<stdio.h>
int main()
{
	int no, d, sum=0;
	printf("Enter a 5-digit number: ");
	scanf("%d", &no);
	
	d = no%10;			//taking out digits
	no = no/10;			//reducing number
	sum = sum + d;		//sum of digits
	
	d = no%10;			//taking out digits
	no = no/10;			//reducing number
	sum = sum + d;		//sum of digits
	
	d = no%10;			//taking out digits
	no = no/10;			//reducing number
	sum = sum + d;		//sum of digits
	
	d = no%10;			//taking out digits
	no = no/10;			//reducing number
	sum = sum + d;		//sum of digits
	
	sum = sum + no;		//Adding the last digit of sum
	
	printf("The sum of digits is %d.\n", sum);
	return 0;
}
