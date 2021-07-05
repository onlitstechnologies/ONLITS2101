#include<iostream>
#define SIZE 5
using namespace std;
int main()
{
    int arr[SIZE] = {23, 5, 56, 99, 15}, n, flag=0;
    cout<<"Enter a number to search: ";
    cin>>n;

    for(int i=0; i<SIZE; i++)
    {
        if(arr[i] == n)
        {
            cout<<n<<" found at position "<<i<<endl;
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        cout<<n<<" not found in the array"<<endl;
    }
    return 0;
}