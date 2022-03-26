/*
    Let Us C program number F(c)
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int health, age, lives, gender;

    printf("Enter the following information:\n");
    printf("Select health condition:\n");
    printf("1. Excellent\n");
    printf("2. Poor\n");
    printf("Enter choice: ");
    scanf("%d", &health);
    if(health>2 || health<1)
    {
        printf("Invalid option, cannot continue.\n");
        return 0;
    }
    printf("Age: ");
    scanf("%d", &age);
    printf("Lives in:\n");
    printf("1. City\n");
    printf("2. Village\n");
    printf("Enter choice: ");
    scanf("%d", &lives);
    if(lives>2 || lives<1)
    {
        printf("Invalid option, cannot continue.\n");
        return 0;
    }
    printf("Select gender:\n");
    printf("1. Male\n");
    printf("2. Female\n");
    printf("Enter choice: ");
    scanf("%d", &gender);
    if(gender>2 || gender<1)
    {
        printf("Invalid option, cannot continue.\n");
        return 0;
    }
    if (gender == 1)
    {
        if (lives == 1)
        {
            if (health == 1)
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
            if (health == 1)
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
        if (lives == 1)
        {
            if (health == 1)
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