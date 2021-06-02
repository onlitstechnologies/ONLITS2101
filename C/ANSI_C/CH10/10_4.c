#include<stdio.h>
#include<stdlib.h>

struct date
{
	int day;
	int month;
	int year;
}d;				//Global declaration

void read();
void validate();
void print();

int main()
{
	int ch;
	do
	{
		printf("Menu\n");
		printf("1. Input\n");
		printf("2. Validate\n");
		printf("3. Display\n");
		printf("4. Exit\n");
		printf("Enter choice: ");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				read();
				break;
			case 2:
				validate();
				break;
			case 3:
				print();
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("Invalid option!\n");
		}
	}
	while(1);			//Creates an infinite loop
}

void read()
{
	printf("Enter day: ");
	scanf("%d", &d.day);
	printf("Enter month: ");
	scanf("%d", &d.month);
	printf("Enter year: ");
	scanf("%d", &d.year);
}

void validate()
{
	int l;
	if(d.month==1 || d.month==3 || d.month==5  || d.month==7  || d.month==8  || d.month==10  || d.month==12)
	{
		if(d.day<1 || d.day>31)
		{
			printf("Invalid date!\n");
			printf("Days cannot be less than 1 or more than 31\n");
		}
	}
	else if(d.month== 4 || d.month == 6  || d.month==9  || d.month==11)
	{
		if(d.day<1 || d.day>30)
		{
			printf("Invalid date!\n");
			printf("Days cannot be less than 1 or more than 30\n");
		}
	}
	
	l = (d.year%4==0 && d.year%100!=0 || d.year%400==0) ? 1 : 0;
	
	if(d.month == 2)
	{
		if(l==1)
		{
			if(d.day<1 || d.day>29)
			{
				printf("Invalid date!\n");
				printf("Days cannot be less than 1 or more than 29\n");
			}
		}
		else
		{
			if(d.day<1 || d.day>28)
			{
				printf("Invalid date!\n");
				printf("Days cannot be less than 1 or more than 28\n");
			}
		}
	}
}

void print()
{
	switch(d.month)
	{
		case 1:
			printf("The date is %s %d, %d.\n", "January", d.day, d.year);
			break;
		case 2:
			printf("The date is %s %d, %d.\n", "February", d.day, d.year);
			break;
		case 3:
			printf("The date is %s %d, %d.\n", "March", d.day, d.year);
			break;
		case 4:
			printf("The date is %s %d, %d.\n", "April", d.day, d.year);
			break;
		case 5:
			printf("The date is %s %d, %d.\n", "May", d.day, d.year);
			break;
		case 6:
			printf("The date is %s %d, %d.\n", "June", d.day, d.year);
			break;
		case 7:
			printf("The date is %s %d, %d.\n", "July", d.day, d.year);
			break;
		case 8:
			printf("The date is %s %d, %d.\n", "August", d.day, d.year);
			break;
		case 9:
			printf("The date is %s %d, %d.\n", "September", d.day, d.year);
			break;
		case 10:
			printf("The date is %s %d, %d.\n", "October", d.day, d.year);
			break;
		case 11:
			printf("The date is %s %d, %d.\n", "November", d.day, d.year);
			break;
		case 12:
			printf("The date is %s %d, %d.\n", "December", d.day, d.year);
			break;
	}
}
