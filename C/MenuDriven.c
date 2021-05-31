/*
	Write a menu driven program to perform some simple arithmetic
	calculations
*/

#include<stdio.h>
#include<stdlib.h>
void menu();
void add();
void subtract();
void multiply();
void divide();

int main()
{
	menu();
	return 0;
}

void menu()
{
	int ch;
	printf("MENU\n");
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	printf("5. Exit\n");
	printf("Enter choice: ");
	scanf("%d", &ch);
	switch(ch)
	{
		case 1:
			add();		//Chaining
			menu();		//recursion
			break;
		case 2:
			subtract();
			menu();
			break;
		case 3:
			multiply();
			menu();
			break;
		case 4:
			divide();
			menu();
			break;
		case 5:
			exit(0);
			break;
		default:
			printf("Invalid option!\n");
			menu();
	}
}

void add()
{
	int a, b;
	printf("Enter a number: ");
	scanf("%d", &a);
	printf("Enter another number: ");
	scanf("%d", &b);
	printf("The sum is %d.\n", a + b);
}

void subtract()
{
	int a, b;
	printf("Enter a number: ");
	scanf("%d", &a);
	printf("Enter another number: ");
	scanf("%d", &b);
	printf("The difference is %d.\n", a - b);
}

void multiply()
{
	int a, b;
	printf("Enter a number: ");
	scanf("%d", &a);
	printf("Enter another number: ");
	scanf("%d", &b);
	printf("The product is %d.\n", a * b);
}

void divide()
{
	int a, b;
	printf("Enter a number: ");
	scanf("%d", &a);
	printf("Enter another number: ");
	scanf("%d", &b);
	printf("The quotient is %d.\n", a / b);
	printf("The remainder is %d.\n", a % b);
}
