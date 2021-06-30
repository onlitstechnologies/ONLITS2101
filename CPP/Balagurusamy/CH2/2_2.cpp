#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Enter another number: ";
    cin>>b;
    if(a>b)
        cout<<a<<" is the larger value."<<endl;
    else
        cout<<b<<" is the larger value."<<endl;
    return 0;
}