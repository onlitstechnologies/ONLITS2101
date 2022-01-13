#include <stdio.h>

int main()
{
    int arr[] = {45, 29, 3, 15, 64, 99, 84, 12, 33, 75};
    int size=10;
    int value, i, stat=0;
    printf("Enter a number to search: ");
    scanf("%d", &value);
    selection_sort(arr, size);
}