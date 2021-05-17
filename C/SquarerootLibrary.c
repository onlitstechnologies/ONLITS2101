/*
Program to find the square root of a number using library function sqrt()
square root of 2 is 1.4142
*/

#include<stdio.h>
#include<math.h>
int main()
{
	float n, s;
	printf("Enter a number: ");	//2nd category
	scanf("%f", &n);			//2nd category
	s = sqrt(n);		//3rd category of function
	printf("The square root of %f is %f\n", n, s);
	return 0;
}
