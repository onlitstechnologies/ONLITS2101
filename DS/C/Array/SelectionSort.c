#include <stdio.h>

#define SIZE 10

int main()
{
    int arr[SIZE], i, j, t;
    printf("Enter %d integers below:\n", SIZE);
    for(i=0; i<SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<SIZE-1; i++)
    {
        for(j=i+1; j<SIZE; j++)
        {
            if(arr[i]>arr[j])
            {
                t = arr[j];
                arr[j] = arr[i];
                arr[i] = t;
            }
        }
    }
    printf("The sorted array is:\n");
    for(i=0; i<SIZE; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}