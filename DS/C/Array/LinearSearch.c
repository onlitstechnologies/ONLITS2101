#include <stdio.h>

int main()
{
    int arr[] = {45, 29, 3, 15, 64, 99, 84, 12, 33, 75};
    int value, i, stat=0;
    printf("Enter a number to search: ");
    scanf("%d", &value);
    for(i=0; i<10; i++)
    {
        if(arr[i] == value)
        {
            printf("%d found at index %d.\n", value, i);
            stat=1;
            break;
        }
    }
    if(stat==0)
        printf("%d not found in the array.\n", value);
    return 0;
}