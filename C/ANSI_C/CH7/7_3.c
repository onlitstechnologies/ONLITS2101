#include<stdio.h>
#include<stdlib.h>
int main()
{
	int vote, count[6] = {0,0,0,0,0,0};
	while(1)
	{
		printf("LIST OF CANDIDATES:\n");
		printf("1. Himanshu Kumar\n");
		printf("2. Chandan Kumar\n");
		printf("3. Rupesh Kumar\n");
		printf("4. Vikram Kumar\n");
		printf("5. Abhishek Kumar\n");
		printf("Enter vote (0 to exit): ");
		scanf("%d", &vote);
	
		switch(vote)
		{
			case 0:
				printf("VOTE RECEIVED BY THE CANDIDATES:\n");
				printf("1. Himanshu Kumar: %d\n", count[0]);
				printf("2. Chandan Kumar: %d\n", count[1]);
				printf("3. Rupesh Kumar: %d\n", count[2]);
				printf("4. Vikram Kumar: %d\n", count[3]);
				printf("5. Abhishek Kumar: %d\n", count[4]);
				printf("6. Spoilt ballots: %d\n", count[5]);
				exit(1);
				break;
			case 1:
				count[0]++;
				break;
			case 2:
				count[1]++;
				break;
			case 3:
				count[2]++;
				break;
			case 4:
				count[3]++;
				break;
			case 5:
				count[4]++;
				break;
			default:
				count[5]++;
		}
	}
	
	return 0;
}
