#include <stdio.h>

int main()
{
    int n = 1;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            printf("%4d", n);
            n++;
        }
        printf("\n");
    }
    return 0;
}