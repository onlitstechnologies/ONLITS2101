#include<stdio.h>
int main()
{
	int n, r=0, t, d;
	printf("Enter a number: ");
	scanf("%d", &n);
	t = n;
	while(t>0)
	{
		d = t % 10;
		t = t / 10;
		r = r * 10 + d;
	}
	if(n == r)
	{
		printf("%d is a palindrome\n", n);
	}
	else
	{
		printf("%d is not a palindrome\n", n);
	}
	return 0;		//returned to OS
}
