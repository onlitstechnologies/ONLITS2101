#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, *arr, i;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    arr = calloc(n, sizeof(int));

     //---Display empty array----
    printf("\nThe elements of array are as follows:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    
    //---Input-------
    printf("\nEnter %d values below:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    //---Display----
    printf("\nThe elements of array are as follows:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    free(arr);
    return 0;
}