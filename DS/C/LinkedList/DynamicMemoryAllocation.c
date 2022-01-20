#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, *arr, i;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    arr = malloc(n * sizeof(int));

    printf("Enter %d values below:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The entered elements are:\n");
    for(i=0; i<n; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}