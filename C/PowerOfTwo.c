#include<stdio.h>
#include "MyLib.c"

int main()
{
	long long i, p;
	for(i=0; i<=50; i++)
	{
		p = power(2, i);		//here 2 and i are argument/parameter
		printf("2 to the power %lld is %lld\n", i, p);
	}
	return 0;
}
