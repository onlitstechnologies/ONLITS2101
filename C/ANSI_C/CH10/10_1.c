#include<stdio.h>
struct time_struct
{
	int hour;
	int minute;
	int second;
};

int main()
{
	struct time_struct s;
	printf("Enter hours: ");
	scanf("%d", &s.hour);
	printf("Enter minutes: ");
	scanf("%d", &s.minute);
	printf("Enter seconds: ");
	scanf("%d", &s.second);
	printf("The time is: %d:%d:%d\n", s.hour, s.minute, s.second);
	return 0;
}
