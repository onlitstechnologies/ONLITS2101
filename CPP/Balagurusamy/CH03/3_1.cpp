#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    swap(a, b);
    cout<<"The values of a and b after swapping are "<<a<<" and "<<b<<", respectively."<<endl;
    return 0;
}

void swap(int &a, int &b)           //Here &a and &b are known as reference variable
{
    int t = a;
    a = b;
    b = t;
}