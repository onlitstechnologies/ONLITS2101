#include<stdio.h>
int main()
{
	int a=10;						//4 bytes
	float b = 50.20F;					//4 bytes
	char c = 'H';						//1 byte
	double d = 542.63;					//8 bytes
	long e = 502;						//8 bytes
	long long f = 56874592;				//8 bytes
	long double g = 789546.23;			//16 bytes
	int *p=&a;
	double *q=&d;
	
	
	printf("The size of a is %ld bytes.\n", sizeof(a));
	printf("The address of a is %p.\n", &a);
	printf("The value of a is %d.\n", a);
	printf("The size of b is %ld bytes.\n", sizeof(b));
	printf("The address of b is %p.\n", &b);
	printf("The value of b is %f.\n", b);
	printf("The size of c is %ld bytes.\n", sizeof(c));
	printf("The address of c is %p.\n", &c);
	printf("The value of c is %c.\n", c);
	printf("The size of d is %ld bytes.\n", sizeof(d));
	printf("The address of d is %p.\n", &d);
	printf("The value of d is %f.\n", d);
	printf("The size of e is %ld bytes.\n", sizeof(e));
	printf("The address of e is %p.\n", &e);
	printf("The value of e is %ld.\n", e);
	printf("The size of f is %ld bytes.\n", sizeof(f));
	printf("The address of f is %p.\n", &f);
	printf("The value of f is %lld.\n", f);
	printf("The size of g is %ld bytes.\n", sizeof(g));
	printf("The address of g is %p.\n", &g);
	printf("The value of g is %Lf.\n", g);
	printf("The size of p is %ld bytes.\n", sizeof(p));
	printf("The address of p is %p.\n", &p);
	printf("The value of p is %p.\n", p);
	printf("The size of q is %ld bytes.\n", sizeof(q));
	printf("The address of q is %p.\n", &q);
	printf("The value of q is %p.\n", q);
	return 0;
}

/*
	Binary of 10 is 1010
*/
