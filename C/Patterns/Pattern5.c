#include <stdio.h>

int main()
{
    int n = 1;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4-i; j++)
        {
            printf("%4c", ' ');
        }

        for (int k = 1; k <= i; k++)
        {
            printf("%4d", n);
            n++;
        }
        printf("\n");
    }
    return 0;
}