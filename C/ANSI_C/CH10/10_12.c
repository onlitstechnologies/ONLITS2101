#include<stdio.h>
struct census
{
	char city[50];
	long int pop;
	float ll;
}c[5];


void read()
{
	int i;
	printf("Enter the details of 5 cities below:\n");
	for(i=0; i<1; i++)
	{
		printf("City: ");
		scanf("%[^\n]", c[i].city);
		printf("Population: ");
		scanf("%ld", &c[i].pop);
		printf("Literacy Level: ");
		scanf("%f", &c[i].ll);
	}
}

void display()
{
	int i = 0;
	printf("The city list is as follows:\n");
	printf("%-30s%20ld%10.2f\n",c[i].city, c[i].pop, c[i].ll);
}

int main()
{
	read();
	display();
}
