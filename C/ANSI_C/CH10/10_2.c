#include<stdio.h>
struct time_struct
{
	int hour;
	int minute;
	int second;
}s;		//global variable

void input();
void display();
//struct time_struct s;	//global variable

int main()
{
	input();
	display();
	return 0;	
}

void input()
{
	printf("Enter hours: ");
	scanf("%d", &s.hour);
	printf("Enter minutes: ");
	scanf("%d", &s.minute);
	printf("Enter seconds: ");
	scanf("%d", &s.second);
}

void display()
{
	printf("The time is: %d:%d:%d\n", s.hour, s.minute, s.second);
}
