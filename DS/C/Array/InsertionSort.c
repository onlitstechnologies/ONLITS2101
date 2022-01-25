#include "common"

#define SIZE 10

int main()
{
    int arr[] = {8, 2, 5, 7, 1, 12, 19, 3, 17, 11}; //Array initialization
    int i, j, current;

    //------- Sorting logic -----------
    for(i=1; i<SIZE; i++)
    {
        current = arr[i];
    
        for(j = i-1; j>=0 && arr[j] > current; j--)
        {
            arr[j+1] = arr[j];
        }
        arr[j+1] = current;
    }
    
    printf("The sorted array is:\n");
    display(arr, SIZE);
    return 0;
}