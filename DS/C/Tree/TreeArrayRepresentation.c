#include <stdio.h>
#include <math.h>

#define MAX 7

int main()
{
    int tree[MAX];

    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < pow(2,i); j++)
        {
            printf("value of j: %d\n", 2*i+1);
            printf("Enter a value: ");
            scanf("%d", &tree[2*i+1]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < pow(2,i); j++)
        {
            printf("%d\n", tree[j]);
        }
    }
    return 0;
}