#include<stdio.h>
int main()
{
	int no, n, r, d;
	printf("Enter a 5-digit number: ");
	scanf("%d", &no);
	
	n=no;
	
	d = n % 10;
	r = d;
	n = n / 10;			//n = 12345/10	= 1234
	
	d = n % 10;
	r = r * 10 + d;
	n = n / 10;			//n=1234/10 = 123
	
	d = n % 10;
	r = r * 10 + d;
	n = n / 10;			//n=123/10 = 12
	
	d = n % 10;
	r = r * 10 + d;
	n = n / 10;			//n=12/10 = 1
	
	r = r * 10 + n;
	
	printf("The reverse %d is %d.\n", no, r);
	
	if(no == r)
	{
		printf("The original and reverse are equal.\n");
	}
	else
	{
		printf("The original and reverse are not equal.\n");
	}
	return 0;
}
