#include<stdio.h>
long long power(long long n, long long m)
{
	long long p=1, i;
	
	for(i = 1; i<=m; i++)
	{
		p = p * n;
	}
	
	return p;		//returns answer
}
