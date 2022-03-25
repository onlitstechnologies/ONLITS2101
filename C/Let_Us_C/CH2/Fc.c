/*
    Let Us C program number F(c)
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char health[10], lives[10], gender[10];
    int age;

    printf("Enter the following information:\n");
    printf("Health condition: ");
    scanf("%s", health);
    printf("Age: ");
    scanf("%d", &age);
    printf("Lives in: ");
    scanf("%s", lives);
    printf("Gender: ");
    scanf("%s", gender);

    if (strcmp(gender, "Male") == 0)
    {
        if (strcmp(lives, "City") == 0)
        {
            if (strcmp(health, "Excellent") == 0)
            {
                if (age >= 25 && age <= 35)
                {
                    printf("The person can be isured.\n");
                    printf("The premium with be Rs. 4 per thousand.\n");
                    printf("The maximum insurance amount can be Rs. 2,00,000.\n");
                }
                else
                {
                    printf("The person cannot be insured\n");
                }
            }
            else
            {
                printf("The person cannot be insured\n");
            }
        }
        else
        {
            if (strcmp(health, "Excellent") == 0)
            {
                printf("The person cannot be insured\n");
            }
            else
            {
                if (age >= 25 && age <= 35)
                {
                    printf("The person can be isured.\n");
                    printf("The premium with be Rs. 6 per thousand.\n");
                    printf("The maximum insurance amount can be Rs. 10,000.\n");
                }
                else
                {
                    printf("The person cannot be insured\n");
                }
            }
        }
    }
    else
    {
        if (strcmp(lives, "City") == 0)
        {
            if (strcmp(health, "Excellent") == 0)
            {
                if (age >= 25 && age <= 35)
                {
                    printf("The person can be isured.\n");
                    printf("The premium with be Rs. 3 per thousand.\n");
                    printf("The maximum insurance amount can be Rs. 1,00,000.\n");
                }
                else
                {
                    printf("The person cannot be insured\n");
                }
            }
            else
            {
                printf("The person cannot be insured\n");
            }
        }
        else
        {
            printf("The person cannot be insured\n");
        }
    }
}