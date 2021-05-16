#include<stdio.h>

int factorial(int n);	//function declaration/prototype

// ---Function definition (main) -------
int main()				//function header
{						//start of function body
	int n;
	printf("Enter a number: ");		//function call
	scanf("%d", &n);
	printf("The factorial of %d is %d.\n", n, factorial(n));	//funciton call
	return 0;
}						//end of function body

//----- Function definition (factorial) ------

int factorial(int n)		//function header
{							//start of function body
	int f=1, i;				//local variable declaration
	for(i=n; i>1; i--)
	{
		f = f * i;			//function statements
	}
	return f;				//return statement
}							//end of function body

/*
	funciton header has 3 parts:
		int	-	return type
		factorial - function name
		int n	-	argument/parameter
*/
