#include <stdio.h>
#include <string.h>

int main()
{
    char ans[50];
    int flag, i;
    for (i = 1; i <= 3; i++)
    {
        printf("Who is the inventor of C? ");
        scanf("%[^\n]%*c", ans);
        flag = strcmp(ans, "Dennis Ritche");

        if (flag == 0)
        {
            printf("Good\n");
            break;
        }
        else
        {
            if(i==3)
            {
                printf("Your 3 attempts are over. The correct answer is Dennis Ritche.\n");
                break;
            }
            printf("Try again\n");
        }
    }
    return 0;
}