#include <stdio.h>
#include <string.h>
#define SIZE 5
struct census
{
	char city[50];
	long int pop;
	float ll;
};

struct census c[SIZE];

void read();
void sort_alphabetically();
void sort_population();
void sort_literacy();
void display();

int main()
{
	read();
	sort_alphabetically();
	printf("\nThe city list sorted alphabetically is as follows:\n");
	display();
	sort_literacy();
	printf("\nThe city list sorted literacy level wise is as follows:\n");
	display();
	sort_population();
	printf("\nThe city list sorted population wise is as follows:\n");
	display();
	return 0;
}

void read()
{
	int i;
	printf("Enter the details of %d cities below:\n", SIZE);
	for (i = 0; i < SIZE; i++)
	{
		printf("City: ");
		scanf("%[^\n]", c[i].city);
		printf("Population: ");
		scanf("%ld", &c[i].pop);
		printf("Literacy Level: ");
		scanf("%f%*c", &c[i].ll);
	}
}

void sort_alphabetically()
{
	int i, j;
	struct census t;
	for (i = 0; i < SIZE - 1; i++)
	{
		for (j = i + 1; j < SIZE; j++)
		{
			if (strcmp(c[i].city, c[j].city) > 0)
			{
				t = c[i];
				c[i] = c[j];
				c[j] = t;
			}
		}
	}
}

void sort_population()
{
	int i, j;
	struct census t;
	for (i = 0; i < SIZE - 1; i++)
	{
		for (j = i + 1; j < SIZE; j++)
		{
			if (c[i].pop < c[j].pop)
			{
				t = c[i];
				c[i] = c[j];
				c[j] = t;
			}
		}
	}
}

void sort_literacy()
{
	int i, j;
	struct census t;
	for (i = 0; i < SIZE - 1; i++)
	{
		for (j = i + 1; j < SIZE; j++)
		{
			if (c[i].ll < c[j].ll)
			{
				t = c[i];
				c[i] = c[j];
				c[j] = t;
			}
		}
	}
}

void display()
{
	int i;
	printf("%-30s%20s%20s\n", "City", "Population", "Literacy Level");
	for (i = 0; i < SIZE; i++)
	{
		printf("%-30s%20ld%20.2f\n", c[i].city, c[i].pop, c[i].ll);
	}
}
