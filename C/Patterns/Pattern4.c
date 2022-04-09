#include <stdio.h>

int main()
{
    int n = 10;
    for (int i = 4; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            printf("%4d", n);
            n--;
        }
        printf("\n");
    }
    return 0;
}