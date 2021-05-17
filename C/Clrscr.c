/*
	Program to implement clrscr in gcc (Category 1 of function)
*/

#include<stdio.h>
#include<stdlib.h>
void clrscr();				//Function declaration/prototype
int main()
{
	clrscr();		//Category 1		Function call
	printf("This statement is displayed on a blank screen.\n");
	return 0;
}

/*------------------ Function Definition ----------------*/
void clrscr()
{
	system("clear");			//system('CLS') in windows
}
