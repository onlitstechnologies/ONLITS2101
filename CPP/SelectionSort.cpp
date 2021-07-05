#include <iostream>
#define SIZE 5
using namespace std;
int main()
{
    int arr[SIZE] = {23, 4, 56, 90, 15};
    for (int i = 0; i < SIZE - 1; i++)
    {
        for (int j = i + 1; j < SIZE; j++)
        {
            if (arr[i] > arr[j])
            {
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }

    for(int i=0; i<SIZE; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}