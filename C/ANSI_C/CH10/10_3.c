#include<stdio.h>
struct time_struct
{
	int hour;
	int minute;
	int second;
}s;		//global variable

void input();
void display();
void update();
//struct time_struct s;	//global variable

int main()
{
	input();
	printf("The time is: ");
	display();
	update();
	printf("The time after update is: ");
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
	printf("%02d:%02d:%02d\n", s.hour, s.minute, s.second);
}

void update()
{
	s.second++;
	if(s.second==60)
	{
		s.minute++;
		s.second = 0;
		if(s.minute==60)
		{
			s.hour++;
			s.minute=0;
			if(s.hour==24)
			{
				s.hour=0;
			}
		}
	}
}
