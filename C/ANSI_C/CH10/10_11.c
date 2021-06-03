#include<stdio.h>
struct metric
{
	float mts;
	float cms;
}m, sm;

struct british
{
	float ft;
	float in;
}b, sb;

void input();
void add();
void display();

int main()
{
	input();
	add();
	display();
	return 0;
}

void input()
{
	printf("Enter meters: ");
	scanf("%f", &m.mts);
	printf("Enter centimeters: ");
	scanf("%f", &m.cms);
	printf("Enter feet: ");
	scanf("%f", &b.ft);
	printf("Enter inches: ");
	scanf("%f", &b.in);
}

void add()
{
	sm.mts = m.mts + (b.ft / 3.28F);
	sm.cms = m.cms + (b.in * 2.54F);
	sb.ft =	sm.mts * 3.28F;
	sb.in = sm.cms / 2.54F;
}

void display()
{
	printf("The sum in metric is %1.2f mts and %1.2f cms.\n", sm.mts, sm.cms);
	printf("The sum in british is %1.2f feet and %1.2f inches.\n", sb.ft, sb.in);
}
