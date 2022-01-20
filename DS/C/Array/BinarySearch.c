#include <stdio.h>
#include "Support.c"

int main()
{
    int arr[] = {45, 29, 3, 15, 64, 99, 84, 12, 33, 75};
    int size = 10, mid, lb = 0, ub = size - 1; //lb = lower bound and ub = upper bound
    int value, i, stat = 0;
    printf("Enter a number to search: ");
    scanf("%d", &value);
    selection_sort(arr, size);
    while (lb <= ub)
    {
        mid = (lb + ub) / 2;
        if (value == arr[mid])
        {
            printf("%d found at index %d.\n", value, mid);
            stat = 1;
            break;
        }
        if (value < arr[mid])
        {
            ub = mid - 1;
        }
        else
        {
            lb = mid + 1;
        }
    }
    if(stat == 0)
    {
        printf("%d not found in the array.\n", value);
    }
    return 0;
}