#include "common"

#define SIZE 10

int main()
{
    int arr[] = {8, 2, 5, 7, 1, 12, 19, 3, 17, 11}; //Array initialization
    int i, j, t;

    //------- Sorting logic -----------
    for(i=0; i<SIZE-1; i++)
    {
        for(j=0; j<SIZE; j++)
        {
            if(arr[j]>arr[j+1])
            {
                t = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = t;
            }
        }
    }
    
    printf("The sorted array is:\n");
    display(arr, SIZE);
    return 0;
}