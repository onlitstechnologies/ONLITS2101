#include<stdio.h>
#include<stdlib.h>
void factorial();
void prime();
void EvenOdd();
int main()
{
	int choice;
	while(1)				//Creates an infinite loop
	{
		printf("\n1. Factorial");
		printf("\n2. Prime");
		printf("\n3. Odd/Even");
		printf("\n4. Exit");
		printf("\nYour Choice? ");
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 1:
				factorial();		//Function Call
				break;
			case 2:
				prime();
				break;
			case 3:
				EvenOdd();
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("Invalid input!\n");
		}
	}
	return 0;
}

void factorial()			//Function Definition
{
	int n, i, f=1;
	printf("Enter a number: ");
	scanf("%d", &n);
	for(i=n; i>1; i--)
	{
		f=f*i;
	}
	printf("The factorial of %d is %d.\n", n, f);
}

void prime()
{
	int n, i, f=0;
	printf("Enter a number: ");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		if(n%i==0)
		{
			f++;
		}
	}
	if(f==2)
	{
		printf("%d is prime number.\n", n);
	}
	else
	{
		printf("%d is composite number.\n", n);
	}
}


void EvenOdd()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	if(n%2==0)
	{
		printf("%d is even number.\n", n);
	}
	else
	{
		printf("%d is odd number.\n", n);
	}
}
