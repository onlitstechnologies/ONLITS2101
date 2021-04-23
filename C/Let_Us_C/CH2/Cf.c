#include<stdio.h>
int main()
{
	int ram, shyam, ajay;
	printf("Enter the age of Ram: ");
	scanf("%d", &ram);
	printf("Enter the age of Shyam: ");
	scanf("%d", &shyam);
	printf("Enter the age of Ajay: ");
	scanf("%d", &ajay);
	if(ram < shyam && ram < ajay)
	{
		printf("Youngest of the three is Ram.\n");
	}
	else if(shyam < ram && shyam < ajay)
	{
		printf("Youngest of the three is Shyam.\n");
	}
	else if(ajay < shyam && ajay < ram)
	{
		printf("Youngest of the three is Ajay.\n");
	}
	return 0;
}
