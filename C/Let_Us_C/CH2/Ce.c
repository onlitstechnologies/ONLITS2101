#include <stdio.h>
int main()
{
	int no, n, r, d;
	printf("Enter a 5-digit number: ");
	scanf("%d", &no);

	if (no >= 10000 && no <= 99999)
	{
		n = no;

		d = n % 10; // d = 12345%10 = 5
		r = d;		// r = 5
		n = n / 10; // n = 12345/10	= 1234

		d = n % 10;		// d = 1234%10 = 4
		r = r * 10 + d; // r = 5 * 10 + 4 = 54
		n = n / 10;		// n = 1234/10 = 123

		d = n % 10;		// d = 123%10 = 3
		r = r * 10 + d; // r = 54 * 10 + 3 = 543
		n = n / 10;		// n = 123/10 = 12

		d = n % 10;		// d = 12 % 10	=	2
		r = r * 10 + d; // r = 543 * 10 + 2 = 5432
		n = n / 10;		// n = 12 / 10 = 1

		r = r * 10 + n; // r = 5432 * 10 + 1 = 54321

		printf("The reverse %d is %d.\n", no, r);

		if (no == r)
		{
			printf("The original and reverse are equal.\n");
		}
		else
		{
			printf("The original and reverse are not equal.\n");
		}
	}
	else
	{
		printf("The number has to be a 5-digit number.\n");
	}
	return 0;
}
